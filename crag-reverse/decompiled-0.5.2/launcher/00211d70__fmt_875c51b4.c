// 00211d70 fmt

/* WARNING: Switch with 1 destination removed at 0x00211f8a */
/* <core[c0acaeba6ab4c2e0]::io::error::repr::Repr as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

ulonglong __rustcall
<core[c0acaeba6ab4c2e0]::io::error::repr::Repr_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (ulonglong *param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  byte extraout_AL;
  ulonglong uVar3;
  undefined7 uVar6;
  undefined8 uVar4;
  undefined7 extraout_var;
  longlong lVar5;
  uint **ppuVar7;
  ulonglong uVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  uint *local_58;
  uint local_4c;
  undefined8 *local_48;
  undefined8 uStack_40;
  uint **local_38;
  undefined8 *puStack_30;
  byte bStack_28;
  byte bStack_27;
  undefined1 local_21;
  
  ppuVar7 = (uint **)*param_1;
  uVar10 = (uint)((ulonglong)ppuVar7 >> 0x20);
  switch((uint)ppuVar7 & 3) {
  case 0:
    bVar1 = (**(code **)(param_2[1] + 0x18))(&switchD_00211d97::switchdataD_0012f8e8,5);
    pcVar12 = (code *)PTR_field_0021a448;
    uStack_40._0_2_ = (ushort)bVar1;
    local_48 = param_2;
    (*(code *)PTR_field_0021a448)(ppuVar7 + 2,4,&DAT_00219698);
    puVar9 = &DAT_002196d8;
    break;
  case 1:
    uStack_40 = 0x212d39;
    bStack_28 = (**(code **)(param_2[1] + 0x18))(&switchD_00211d97::switchdataD_0012f8e8,6);
    puVar9 = PTR_field_0021a448;
    bStack_27 = 0;
    uStack_40 = 0x212d6c;
    puStack_30 = param_2;
    (*(code *)PTR_field_0021a448)((longlong)ppuVar7 + 0x1f,4,&DAT_00219698);
    uStack_40 = 0x212d85;
    (*(code *)puVar9)(*(undefined8 *)((longlong)ppuVar7 - 1),5,
                      *(undefined8 *)((longlong)ppuVar7 + 7));
    if (((~bStack_27 | bStack_28) & 1) == 0) {
      if ((*(byte *)((longlong)puStack_30 + 0x12) & 0x80) == 0) {
        lVar5 = puStack_30[1];
        uVar4 = 2;
      }
      else {
        lVar5 = puStack_30[1];
        uVar4 = 1;
      }
      uStack_40 = 0x212dd1;
      uVar3 = (**(code **)(lVar5 + 0x18))(bStack_28,uVar4);
    }
    else {
      uVar3 = (ulonglong)(bStack_27 | bStack_28);
    }
    return uVar3 & 0xffffffffffffff01;
  case 2:
    local_4c = uVar10;
    bVar1 = (**(code **)(param_2[1] + 0x18))(&switchD_00211d97::switchdataD_0012f8e8,2);
    pcVar12 = (code *)PTR_field_0021a448;
    uStack_40._0_2_ = (ushort)bVar1;
    local_48 = param_2;
    (*(code *)PTR_field_0021a448)(&local_4c,4,&DAT_00219678);
    local_21 = (**(code **)(*(longlong *)PTR_OS_FUNCTIONS_00219f20 + 8))();
    (*pcVar12)(&local_21,4,&DAT_00219698);
    puVar9 = &DAT_002196b8;
    ppuVar7 = &local_58;
    local_58 = &local_4c;
    break;
  case 3:
    uVar11 = 0xff;
    if ((ulonglong)ppuVar7 >> 0x20 < 0x2b) {
      uVar11 = uVar10;
    }
    uVar3 = (**(code **)(param_2[1] + 0x18))(&switchD_00211d97::switchdataD_0012f8e8,4);
    uVar8 = uVar3 & 0xffffffff;
    uVar6 = (undefined7)(uVar3 >> 8);
    bVar1 = 1;
    if ((char)uVar8 != '\0') goto LAB_00212002;
    if ((*(byte *)((longlong)param_2 + 0x12) & 0x80) != 0) {
      uVar4 = (**(code **)(param_2[1] + 0x18))(uVar8,2);
      if ((char)uVar4 == '\0') {
        local_58 = (uint *)CONCAT71(local_58._1_7_,1);
        local_48 = (undefined8 *)*param_2;
        uStack_40 = param_2[1];
        local_38 = &local_58;
        uVar4 = (*(code *)PTR_write_str_0021ada8)
                          (&PTR_DAT_002198b0,*(undefined8 *)(&DAT_001316b8 + ((uVar11 & 0xff) << 3))
                          );
        if ((char)uVar4 == '\0') {
          uVar4 = (*(code *)PTR_write_str_0021ada8)(extraout_XMM0_Da_00,2);
          cVar2 = (char)uVar4;
          uVar6 = (undefined7)((ulonglong)uVar4 >> 8);
          uVar13 = extraout_XMM0_Da_01;
          goto joined_r0x00212029;
        }
      }
LAB_00212000:
      uVar6 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar1 = 1;
      goto LAB_00212002;
    }
    uVar4 = (**(code **)(param_2[1] + 0x18))(uVar8,1);
    if ((char)uVar4 != '\0') goto LAB_00212000;
    uVar4 = (**(code **)(param_2[1] + 0x18))
                      (&PTR_DAT_002198b0,*(undefined8 *)(&DAT_001316b8 + ((uVar11 & 0xff) << 3)));
    cVar2 = (char)uVar4;
    uVar6 = (undefined7)((ulonglong)uVar4 >> 8);
    uVar13 = extraout_XMM0_Da;
joined_r0x00212029:
    bVar1 = 1;
    if (cVar2 != '\0') goto LAB_00212002;
    lVar5 = param_2[1];
    goto LAB_00211f9e;
  }
  uVar13 = (*pcVar12)(ppuVar7,7,puVar9);
  if (((~uStack_40._1_1_ | (byte)uStack_40) & 1) == 0) {
    if ((*(byte *)((longlong)local_48 + 0x12) & 0x80) == 0) {
      lVar5 = local_48[1];
      uVar4 = 2;
    }
    else {
      lVar5 = local_48[1];
LAB_00211f9e:
      uVar4 = 1;
    }
    (**(code **)(lVar5 + 0x18))(uVar13,uVar4);
    bVar1 = extraout_AL;
    uVar6 = extraout_var;
  }
  else {
    bVar1 = uStack_40._1_1_ | (byte)uStack_40;
    uVar6 = 0;
  }
LAB_00212002:
  return CONCAT71(uVar6,bVar1) & 0xffffffffffffff01;
}


