// 000b6520 debug_struct_field1_finish

/* WARNING: Removing unreachable block (ram,0x000b6584) */
/* WARNING: Removing unreachable block (ram,0x000b65a3) */
/* WARNING: Removing unreachable block (ram,0x000b658e) */
/* WARNING: Removing unreachable block (ram,0x000b65b6) */
/* <core[c0acaeba6ab4c2e0]::fmt::Formatter>::debug_struct_field1_finish */

byte __rustcall
<core[c0acaeba6ab4c2e0]::fmt::Formatter>::debug_struct_field1_finish(longlong param_1)

{
  byte bVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 in_stack_00000008;
  
  bVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))();
  (*(code *)PTR_field_000c4490)(in_R9,in_R8,in_stack_00000008);
  return bVar1 & 1;
}


