// 0020b400 debug_struct_field2_finish

/* WARNING: Removing unreachable block (ram,0x0020b47e) */
/* WARNING: Removing unreachable block (ram,0x0020b49d) */
/* WARNING: Removing unreachable block (ram,0x0020b488) */
/* WARNING: Removing unreachable block (ram,0x0020b4b0) */
/* <core[c0acaeba6ab4c2e0]::fmt::Formatter>::debug_struct_field2_finish */

byte __rustcall
<core[c0acaeba6ab4c2e0]::fmt::Formatter>::debug_struct_field2_finish(longlong param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  bVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))();
  puVar1 = PTR_field_0021a448;
  (*(code *)PTR_field_0021a448)(in_R9,in_R8,in_stack_00000008);
  (*(code *)puVar1)(in_stack_00000020,in_stack_00000018,in_stack_00000028);
  return bVar2 & 1;
}


