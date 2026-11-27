// 006d95a0 flat_map_take_entry

/* serde[8f836fbdfa2c5b5d]::private::de::flat_map_take_entry */

char * __rustcall
serde[8f836fbdfa2c5b5d]::private::de::flat_map_take_entry
          (undefined4 param_1,char *param_2,char *param_3,longlong param_4,longlong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  undefined4 extraout_XMM0_Da;
  int local_48;
  longlong local_38;
  
  if (*param_3 == -1) goto switchD_006d95e2_default;
  switch(*param_3) {
  case '\f':
    local_38 = *(longlong *)(param_3 + 0x18);
    if (param_5 == 0) goto switchD_006d95e2_default;
    goto LAB_006d9651;
  case '\r':
    local_38 = *(longlong *)(param_3 + 0x10);
    break;
  case '\x0e':
    param_1 = (*(code *)PTR_from_utf8_00799468)
                        (&switchD_006d95e2::switchdataD_001b60ac,*(undefined8 *)(param_3 + 0x18));
    if ((char)local_48 != '\0') goto switchD_006d95e2_default;
    break;
  case '\x0f':
    param_1 = (*(code *)PTR_from_utf8_00799468)
                        (&switchD_006d95e2::switchdataD_001b60ac,*(undefined8 *)(param_3 + 0x10));
    if (local_48 == 1) goto switchD_006d95e2_default;
    break;
  default:
    goto switchD_006d95e2_default;
  }
  if (param_5 != 0) {
LAB_006d9651:
    lVar9 = 0;
    do {
      if ((*(longlong *)(param_4 + 8 + lVar9) == local_38) &&
         (iVar8 = (*(code *)PTR_bcmp_00799020)(param_1,local_38), param_1 = extraout_XMM0_Da,
         iVar8 == 0)) {
        uVar1 = *(undefined8 *)param_3;
        uVar2 = *(undefined8 *)(param_3 + 8);
        uVar3 = *(undefined8 *)(param_3 + 0x10);
        uVar4 = *(undefined8 *)(param_3 + 0x18);
        uVar5 = *(undefined8 *)(param_3 + 0x20);
        uVar6 = *(undefined8 *)(param_3 + 0x28);
        uVar7 = *(undefined8 *)(param_3 + 0x38);
        *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
        *(undefined8 *)(param_2 + 0x38) = uVar7;
        *(undefined8 *)(param_2 + 0x20) = uVar5;
        *(undefined8 *)(param_2 + 0x28) = uVar6;
        *(undefined8 *)(param_2 + 0x10) = uVar3;
        *(undefined8 *)(param_2 + 0x18) = uVar4;
        *(undefined8 *)param_2 = uVar1;
        *(undefined8 *)(param_2 + 8) = uVar2;
        goto LAB_006d96b5;
      }
      lVar9 = lVar9 + 0x10;
    } while (param_5 * 0x10 != lVar9);
  }
switchD_006d95e2_default:
  param_3 = param_2;
LAB_006d96b5:
  *param_3 = -1;
  return param_2;
}


