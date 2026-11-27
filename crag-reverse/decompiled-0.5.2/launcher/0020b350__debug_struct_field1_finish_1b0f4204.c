// 0020b350 debug_struct_field1_finish

/* WARNING: Removing unreachable block (ram,0x0020b3b4) */
/* WARNING: Removing unreachable block (ram,0x0020b3d3) */
/* WARNING: Removing unreachable block (ram,0x0020b3be) */
/* WARNING: Removing unreachable block (ram,0x0020b3e6) */
/* <core[c0acaeba6ab4c2e0]::fmt::Formatter>::debug_struct_field1_finish */

byte __rustcall
<core[c0acaeba6ab4c2e0]::fmt::Formatter>::debug_struct_field1_finish(longlong param_1)

{
  byte bVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 in_stack_00000008;
  
  bVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))();
  (*(code *)PTR_field_0021a448)(in_R9,in_R8,in_stack_00000008);
  return bVar1 & 1;
}


