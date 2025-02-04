#include <iostream>
#include <fstream>
#include <vector>
#include <libfdt.h>

void readFile(const std::string& filepath, std::vector<char>& buffer) {
    std::ifstream file(filepath, std::ios::binary | std::ios::ate);
    if (!file) {
        throw std::runtime_error("Failed to open file: " + filepath);
    }

    std::streamsize size = file.tellg();
    file.seekg(0, std::ios::beg);

    buffer.resize(size);
    if (!file.read(buffer.data(), size)) {
        throw std::runtime_error("Failed to read file: " + filepath);
    }
}

void parseDeviceTree(const std::vector<char>& dtbBuffer) {
    const void* fdt = dtbBuffer.data();

    // Check if the DTB is valid
    if (fdt_check_header(fdt) != 0) {
        throw std::runtime_error("Invalid Device Tree Binary (DTB) file");
    }

    int node = 0;
    while ((node = fdt_next_node(fdt, node, nullptr)) >= 0) {
        const char* name = fdt_get_name(fdt, node, nullptr);
        if (name) {
            std::cout << "Node: " << name << '\n';

            // Iterate over the properties of this node
            int propertyOffset = fdt_first_property_offset(fdt, node);
            while (propertyOffset >= 0) {
                const struct fdt_property* prop = fdt_get_property_by_offset(fdt, propertyOffset, nullptr);
                if (prop) {
                    std::string propName = fdt_string(fdt, fdt32_to_cpu(prop->nameoff));
                    std::cout << "  Property: " << propName;

                    if (prop->len > 0) {
                        std::cout << ", Value: ";
                        for (int i = 0; i < prop->len; ++i) {
                            std::cout << std::hex << static_cast<int>(reinterpret_cast<const uint8_t*>(prop->data)[i]) << " ";
                        }
                    }
                    std::cout << '\n';
                }
                propertyOffset = fdt_next_property_offset(fdt, propertyOffset);
            }
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <dtb_file_path>\n";
        return 1;
    }

    try {
        std::string dtbFilePath = argv[1];
        std::vector<char> dtbBuffer;
        readFile(dtbFilePath, dtbBuffer);
        parseDeviceTree(dtbBuffer);
    } catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << '\n';
        return 1;
    }

    return 0;
}
