#include "medicine.h" // Ensure this file defines the Medicine class
namespace Medicining {
class RepositoryManager
{
public:
    
    static Medicine currentMedicine;
    static void saveMedicineDetails();
    static void   getMedicineDetails();
       
};
}