// 006b3490 fmt

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x006b37f7) overlaps instruction at (ram,0x006b37f6)
    */
/* WARNING: Switch with 1 destination removed at 0x006b34ca */
/* WARNING: Switch with 1 destination removed at 0x006b34df */
/* WARNING: Switch with 1 destination removed at 0x006b34f4 */
/* WARNING: Switch with 1 destination removed at 0x006b3509 */
/* WARNING: Switch with 1 destination removed at 0x006b351e */
/* WARNING: Switch with 1 destination removed at 0x006b3533 */
/* WARNING: Switch with 1 destination removed at 0x006b356e */
/* WARNING: Switch with 1 destination removed at 0x006b3583 */
/* WARNING: Switch with 1 destination removed at 0x006b377f */
/* WARNING: Switch with 1 destination removed at 0x006b3795 */
/* WARNING: Switch with 1 destination removed at 0x006b37ab */
/* WARNING: Switch with 1 destination removed at 0x006b37c1 */
/* WARNING: Switch with 1 destination removed at 0x006b3812 */
/* WARNING: Switch with 1 destination removed at 0x006b3828 */
/* <&hyper[c4782d5b5c5e3493]::error::Parse as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&hyper[c4782d5b5c5e3493]::error::Parse_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (undefined8 *param_1,uint *param_2)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bVar7;
  byte *local_8;
  
  local_8 = (byte *)*param_1;
  bVar7 = 5;
  if (3 < *local_8) {
    bVar7 = *local_8 - 4;
  }
  uVar5 = (ulonglong)(int)(&switchD_006b34b9::switchdataD_001a6a40)[bVar7];
  lVar6 = (longlong)&switchD_006b34b9::switchdataD_001a6a40 + uVar5;
  bVar2 = (byte)param_2;
  uVar4 = (uint)param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar7) {
  case 0:
    lVar6 = 6;
    break;
  case 1:
    lVar6 = 7;
    break;
  case 2:
    lVar6 = 9;
    break;
  case 3:
    lVar6 = 3;
    break;
  case 4:
    lVar6 = 10;
    break;
  case 5:
    (*(code *)PTR_debug_tuple_field1_finish_007998d0)(&local_8,6,&DAT_007921f8);
    return;
  case 6:
    lVar6 = 8;
    break;
  case 7:
    lVar6 = 6;
    break;
  case 8:
    lVar6 = 8;
    break;
  case 9:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 10:
    *param_2 = *param_2 + uVar4 + (uint)(0xffffffffffe595bf < uVar5);
    *(byte *)param_2 = (byte)*param_2 + bVar2;
    break;
  case 0xb:
    *(byte *)param_2 = (byte)*param_2 | bVar2;
    *(byte *)param_2 = (byte)*param_2 + bVar2;
    break;
  case 0xc:
    *param_2 = *param_2 | uVar4;
    *(byte *)param_2 = (byte)*param_2 + bVar2;
    break;
  case 0xd:
    local_8 = (byte *)0x6b376d;
    (*(code *)PTR_debug_tuple_field1_finish_007998d0)();
    return;
  case 0xe:
    local_8 = (byte *)0x6b3800;
    (*(code *)PTR_debug_tuple_field1_finish_007998d0)();
    return;
  case 0xf:
    *(byte *)param_2 = (byte)*param_2 + bVar2;
    *(byte *)((longlong)param_2 + -0x77) = *(byte *)((longlong)param_2 + -0x77) + (char)local_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    *param_2 = *param_2 + uVar4 + (uint)(0xffffffffffe595bf < uVar5);
    *(byte *)param_2 = (byte)*param_2 + bVar2;
    break;
  case 0x11:
    cVar3 = bVar2 + (byte)*param_2;
    param_2 = (uint *)CONCAT71((int7)((ulonglong)param_2 >> 8),cVar3);
    *(byte *)param_2 = (byte)*param_2 + cVar3;
    break;
  case 0x12:
    *(byte *)param_2 = (byte)*param_2 + bVar2;
    *(byte *)((longlong)param_2 + -0x77) = *(byte *)((longlong)param_2 + -0x77) + (char)local_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x13:
    param_2 = (uint *)(ulonglong)(uVar4 | 0x48000000);
  }
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_2 + 2) + 0x18))
            (*(code **)(*(longlong *)(param_2 + 2) + 0x18),lVar6);
  return;
}


