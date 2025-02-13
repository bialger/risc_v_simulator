#ifndef LIBRARIES_ASM_RISCV_RISCVREGISTERS_HPP_
#define LIBRARIES_ASM_RISCV_RISCVREGISTERS_HPP_

#include <cstdint>
#include <vector>

class RISCVRegisters {
 public:
  RISCVRegisters();

  [[nodiscard]] int32_t GetRegister(size_t index) const;
  [[nodiscard]] uint32_t GetPC() const;

  void SetRegister(size_t index, int32_t value);
  void SetPC(uint32_t value);

 private:
  std::vector<int32_t> registers_;
  uint32_t pc_;
};

#endif //LIBRARIES_ASM_RISCV_RISCVREGISTERS_HPP_
