// 006d7430 parse_from_rfc3339

/* <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::fixed::FixedOffset>>::parse_from_rfc3339
    */

undefined8 * __rustcall
<chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::fixed::FixedOffset>>
::parse_from_rfc3339(undefined8 *param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uStack_84;
  byte bStack_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_54;
  int iStack_50;
  uint uStack_4c;
  ulonglong uStack_48;
  undefined4 uStack_3c;
  int iStack_38;
  
  if (param_3 < 0x13) {
    *(undefined1 *)((longlong)param_1 + 4) = 4;
    goto LAB_006d76c6;
  }
  if ((((((byte)(*param_2 - 0x30U) < 10) && ((byte)(param_2[1] - 0x30U) < 10)) &&
       ((byte)(param_2[2] - 0x30U) < 10)) &&
      ((((byte)(param_2[3] - 0x30U) < 10 && (param_2[4] == '-')) &&
       (((byte)(param_2[5] - 0x30U) < 10 &&
        (((byte)(param_2[6] - 0x30U) < 10 && (param_2[7] == '-')))))))) &&
     (((byte)(param_2[8] - 0x30U) < 10 && ((byte)(param_2[9] - 0x30U) < 10)))) {
    iVar5 = (uint)(byte)param_2[8] * 10;
    cVar7 = (char)iVar5 + param_2[9] + -0x10;
    iVar5 = (*(code *)PTR_from_ymd_opt_0079a6f0)(CONCAT31((int3)((uint)iVar5 >> 8),cVar7),cVar7);
    if (iVar5 == 0) goto LAB_006d7822;
    cVar7 = param_2[10];
    if ((((cVar7 == ' ') || (cVar7 == 'T')) || (cVar7 == 't')) &&
       ((cVar7 = param_2[0xb], (byte)(cVar7 - 0x30U) < 10 &&
        (cVar1 = param_2[0xc], (byte)(cVar1 - 0x30U) < 10)))) {
      if ((((param_2[0xd] != ':') ||
           ((cVar2 = param_2[0xe], 9 < (byte)(cVar2 - 0x30U) ||
            (uStack_48 = (ulonglong)(byte)param_2[0xf], 9 < (byte)(param_2[0xf] - 0x30U))))) ||
          (param_2[0x10] != ':')) ||
         ((9 < (byte)(param_2[0x11] - 0x30U) || (9 < (byte)(param_2[0x12] - 0x30U))))) {
        *(undefined1 *)((longlong)param_1 + 4) = 3;
        goto LAB_006d782a;
      }
      bVar4 = (param_2[0x11] * '\n' + param_2[0x12]) - 0x10;
      uVar9 = 0x3b;
      if (bVar4 != 0x3c) {
        uVar9 = (uint)bVar4;
      }
      uStack_84 = 1000000000;
      if (bVar4 != 0x3c) {
        uStack_84 = 0;
      }
      if (param_3 == 0x13) {
LAB_006d76f0:
        param_3 = param_3 - 0x13;
        param_2 = param_2 + 0x13;
LAB_006d76f8:
        bVar4 = cVar1 + cVar7 * '\n';
        if ((((bVar4 < 0x28) && (bVar8 = (char)uStack_48 + cVar2 * '\n', bVar8 < 0x4c)) &&
            (bStack_80 = (byte)uVar9, bStack_80 < 0x3c)) &&
           ((uStack_84 < 1000000000 || ((uVar9 == 0x3b && (uStack_84 < 2000000000)))))) {
          chrono[1cd233408897ab2f]::format::scan::timezone_offset::
          <chrono[1cd233408897ab2f]::format::parse::parse_rfc3339::_closure_0_>
                    (&iStack_78,param_2,param_3,1,0,1);
          if (CONCAT44(uStack_74,iStack_78) == 0) goto LAB_006d7796;
          if (CONCAT44(uStack_6c,uStack_70) != 0) {
            *(undefined1 *)((longlong)param_1 + 4) = 5;
            goto LAB_006d782a;
          }
          if (iStack_68 + 0x1517fU < 0x2a2ff) {
            iStack_50 = (uint)(byte)(bVar8 - 0x10) * 0x3c + (uint)(byte)(bVar4 - 0x10) * 0xe10 +
                        uVar9;
            uStack_4c = uStack_84;
            iStack_38 = iStack_68;
            uStack_3c = 0;
            iStack_54 = iVar5;
            uVar10 = <chrono[1cd233408897ab2f]::offset::LocalResult<chrono[1cd233408897ab2f]::offset::fixed::FixedOffset>>
                     ::and_then::
                     <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::fixed::FixedOffset>,<chrono[1cd233408897ab2f]::offset::fixed::FixedOffset_as_chrono[1cd233408897ab2f]::offset::TimeZone>::from_local_datetime::_closure_0_>
                               (&iStack_78,&uStack_3c,&iStack_54);
            if (iStack_78 == 0) {
              *param_1 = CONCAT44(uStack_70,uStack_74);
              param_1[1] = CONCAT44(iStack_68,uStack_6c);
              return param_1;
            }
            (*(code *)PTR_panic_00799338)(uVar10,&PTR_s__vendor_chrono_0_4_45_src_format_00793420);
            goto LAB_006d784f;
          }
        }
LAB_006d7822:
        *(undefined1 *)((longlong)param_1 + 4) = 0;
      }
      else {
        if (param_2[0x13] != '.') {
          if (-0x41 < param_2[0x13]) goto LAB_006d76f0;
LAB_006d784f:
          (*(code *)PTR_slice_error_fail_00799408)
                    (param_3,0x13,&PTR_s__vendor_chrono_0_4_45_src_format_007933f0);
LAB_006d786a:
          (*(code *)PTR_slice_error_fail_00799408)
                    (param_3,0x14,&PTR_s__vendor_chrono_0_4_45_src_format_00793408);
          pcVar3 = (code *)swi(3);
          puVar6 = (undefined8 *)(*pcVar3)();
          return puVar6;
        }
        if ((0x14 < param_3) && (param_2[0x14] < -0x40)) goto LAB_006d786a;
        (*(code *)PTR_nanosecond_0079a6e8)(0,param_3 - 0x14);
        param_2 = (char *)CONCAT44(uStack_74,iStack_78);
        if (param_2 != (char *)0x0) {
          param_3 = CONCAT44(uStack_6c,uStack_70);
          uStack_84 = uStack_84 + iStack_68;
          goto LAB_006d76f8;
        }
LAB_006d7796:
        *(undefined1 *)((longlong)param_1 + 4) = (undefined1)uStack_70;
      }
LAB_006d782a:
      *(undefined4 *)param_1 = 0;
      return param_1;
    }
  }
  *(undefined1 *)((longlong)param_1 + 4) = 3;
LAB_006d76c6:
  *(undefined4 *)param_1 = 0;
  return param_1;
}


