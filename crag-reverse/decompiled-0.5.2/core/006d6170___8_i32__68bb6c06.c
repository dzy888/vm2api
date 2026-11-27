// 006d6170 <8:i32>

/* core[c0acaeba6ab4c2e0]::core_arch::x86::aes::_mm_aeskeygenassist_si128::<8i32> */

void __rustcall
core[c0acaeba6ab4c2e0]::core_arch::x86::aes::_mm_aeskeygenassist_si128::<8:i32>
          (undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = aeskeygenassist(*param_2,8);
  *param_1 = auVar1;
  return;
}


