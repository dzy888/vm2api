// 000779a0 fmt

/* WARNING: Switch with 1 destination removed at 0x00077a15 */
/* WARNING: Switch with 1 destination removed at 0x00077a31 */
/* WARNING: Switch with 1 destination removed at 0x00077a88 */
/* WARNING: Switch with 1 destination removed at 0x00077aa4 */
/* WARNING: Switch with 1 destination removed at 0x00077adf */
/* WARNING: Switch with 1 destination removed at 0x00077b7f */
/* WARNING: Switch with 1 destination removed at 0x00077be1 */
/* WARNING: Switch with 1 destination removed at 0x00077bfd */
/* WARNING: Switch with 1 destination removed at 0x00077c19 */
/* <serde_core[48776c27239fa21f]::de::Unexpected as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<serde_core[48776c27239fa21f]::de::Unexpected_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (undefined1 *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 *local_20;
  code *local_18;
  undefined8 local_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    local_10 = CONCAT71(local_10._1_7_,param_1[1]);
    local_20 = &local_10;
    local_18 = (code *)PTR_fmt_000c4018;
    (*(code *)PTR_write_000c3f70)(&local_20,&DAT_00009eaa);
    return;
  case 1:
    local_10 = *(undefined8 *)(param_1 + 8);
    local_18 = (code *)PTR_fmt_000c3b68;
    goto LAB_00077b4a;
  case 2:
    local_10 = *(undefined8 *)(param_1 + 8);
    local_18 = (code *)PTR_fmt_000c3b70;
LAB_00077b4a:
    local_20 = &local_10;
    (*(code *)PTR_write_000c3f70)(&local_20,&DAT_0000b4fa);
    return;
  case 3:
    local_10 = *(undefined8 *)(param_1 + 8);
    local_20 = &local_10;
    local_18 = (code *)PTR_fmt_000c4038;
    (*(code *)PTR_write_000c3f70)(&local_20,&DAT_00009897);
    return;
  case 4:
    local_10 = CONCAT44(local_10._4_4_,*(undefined4 *)(param_1 + 4));
    local_20 = &local_10;
    local_18 = (code *)PTR_fmt_000c4030;
    (*(code *)PTR_write_000c3f70)(&local_20,&DAT_000099fe);
    return;
  case 5:
    local_10 = *(undefined8 *)(param_1 + 8);
    uStack_8 = *(undefined4 *)(param_1 + 0x10);
    uStack_4 = *(undefined4 *)(param_1 + 0x14);
    local_20 = &local_10;
    local_18 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
    (*(code *)PTR_write_000c3f70)(&local_20,&DAT_0000a51b);
    return;
  case 6:
    goto LAB_00077bd2;
  case 7:
LAB_00077bd2:
    uVar1 = 10;
    break;
  case 8:
    goto LAB_00077c0a;
  case 9:
    goto LAB_00077a95;
  case 10:
    uVar1 = 8;
    break;
  case 0xb:
    uVar1 = 3;
    break;
  case 0xc:
    uVar1 = 4;
    break;
  case 0xd:
LAB_00077c0a:
    uVar1 = 0xc;
    break;
  case 0xe:
    uVar1 = 0xf;
    break;
  case 0xf:
    uVar1 = 0xd;
    break;
  case 0x10:
LAB_00077a95:
    uVar1 = 0xe;
    break;
  case 0x11:
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000b6ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,uVar1);
  return;
}


