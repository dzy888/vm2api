// 00719bc0 <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>

/* WARNING: Switch with 1 destination removed at 0x00719dfc */
/* <&mut serde_json[dc3825464c436029]::ser::Serializer<&mut
   <serde_json[dc3825464c436029]::value::Value as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,
   serde_json[dc3825464c436029]::ser::PrettyFormatter> as
   serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
    */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::Serializer>
::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
          (undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  char *pcVar12;
  longlong lVar13;
  undefined8 unaff_R13;
  longlong lVar14;
  longlong lVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar16;
  
  lVar13 = *(longlong *)(param_2 + 8);
  lVar14 = *(longlong *)(param_2 + 0x10);
  uVar11 = *param_1;
  lVar1 = param_1[3];
  param_1[3] = lVar1 + 1;
  *(undefined1 *)(param_1 + 4) = 0;
  uVar8 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
          ::write_all(uVar11,"[",1);
  if (uVar8 == 0) {
    if (lVar14 == 0) {
      param_1[3] = lVar1;
LAB_00719e06:
      uVar8 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
              ::write_all(uVar11,"]",1);
      if (uVar8 == 0) {
        return (undefined8 *)0x0;
      }
    }
    else {
      lVar14 = lVar14 * 0x20 + lVar13;
      bVar6 = true;
      do {
        if (bVar6) {
          uVar11 = 1;
          pcVar12 = "\n";
        }
        else {
          uVar11 = 2;
          pcVar12 = ",\n";
        }
        uVar8 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                ::write_all(*param_1,pcVar12,uVar11);
        if (uVar8 != 0) goto LAB_00719deb;
        lVar1 = param_1[3];
        if ((lVar1 != 0) && (lVar2 = param_1[2], lVar2 != 0)) {
          lVar15 = 0;
          uVar16 = extraout_XMM0_Da;
LAB_00719ccb:
          do {
            cVar7 = (*(code *)PTR_write_str_00799488)(uVar16,lVar2);
            if (cVar7 != '\0') {
              uVar8 = (*(code *)PTR_<&str>_007991e8)(extraout_XMM0_Da_00,9);
              switch((uint)uVar8 & 3) {
              case 0:
                cVar7 = *(char *)(uVar8 + 0x10);
                break;
              case 1:
                if (*(char *)(uVar8 + 0x1f) != '#') goto LAB_00719deb;
                uVar16 = (*(code *)PTR_drop_00799040)();
                goto LAB_00719ccb;
              case 2:
                lVar9 = (*(code *)PTR_get_os_functions_007992e0)();
                cVar7 = (**(code **)(lVar9 + 0x10))();
                uVar16 = extraout_XMM0_Da_02;
                if (cVar7 == '\0') goto LAB_00719deb;
                goto LAB_00719ccb;
              case 3:
                cVar7 = (char)(uVar8 >> 0x20);
                if (0x2a < uVar8 >> 0x20) {
                  cVar7 = -1;
                }
              }
              uVar16 = extraout_XMM0_Da_01;
              if (cVar7 != '#') goto LAB_00719deb;
              goto LAB_00719ccb;
            }
            lVar15 = lVar15 + 1;
            uVar16 = extraout_XMM0_Da_00;
          } while (lVar15 != lVar1);
        }
        puVar10 = (undefined8 *)
                  <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                  ::serialize::
                  <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::PrettyFormatter>>
                            (lVar13,param_1);
        if (puVar10 != (undefined8 *)0x0) {
          return puVar10;
        }
        lVar13 = lVar13 + 0x20;
        *(undefined1 *)(param_1 + 4) = 1;
        bVar6 = false;
      } while (lVar13 != lVar14);
      uVar11 = *param_1;
      lVar13 = param_1[3];
      param_1[3] = lVar13 + -1;
      uVar8 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
              ::write_all(uVar11,"\n",1);
      if (uVar8 == 0) {
        uVar3 = param_1[1];
        uVar4 = param_1[2];
        do {
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) goto LAB_00719e06;
          uVar8 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                  ::write_all(uVar11,uVar3,uVar4);
        } while (uVar8 == 0);
      }
    }
  }
LAB_00719deb:
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar10 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  puVar10[4] = 0;
  puVar10[2] = unaff_R13;
  puVar10[3] = 0;
  *puVar10 = 1;
  puVar10[1] = uVar8;
  return puVar10;
}


