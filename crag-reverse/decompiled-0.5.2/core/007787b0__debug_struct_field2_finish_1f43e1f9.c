// 007787b0 debug_struct_field2_finish

/* WARNING: Removing unreachable block (ram,0x0077882e) */
/* WARNING: Removing unreachable block (ram,0x0077884d) */
/* WARNING: Removing unreachable block (ram,0x00778838) */
/* WARNING: Removing unreachable block (ram,0x00778860) */
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
  puVar1 = PTR_field_0079a400;
  (*(code *)PTR_field_0079a400)(in_R9,in_R8,in_stack_00000008);
  (*(code *)puVar1)(in_stack_00000020,in_stack_00000018,in_stack_00000028);
  return bVar2 & 1;
}


