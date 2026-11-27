// 00719490 <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::PrettyFormatter>>

/* WARNING: Instruction at (ram,0x00719c99) overlaps instruction at (ram,0x00719c98)
    */
/* WARNING: Removing unreachable block (ram,0x00719c38) */
/* WARNING: Switch with 1 destination removed at 0x00719887 */
/* WARNING: Switch with 1 destination removed at 0x00719dfc */
/* <serde_json[dc3825464c436029]::value::Value as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<&mut
   serde_json[dc3825464c436029]::ser::Serializer<&mut <serde_json[dc3825464c436029]::value::Value as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,
   serde_json[dc3825464c436029]::ser::PrettyFormatter>> */

undefined8 * __rustcall
<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>::
serialize::
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::PrettyFormatter>>
          (undefined4 param_1,byte *param_2,undefined8 *param_3,undefined2 param_4)

{
  ushort *puVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char *pcVar15;
  ulonglong *puVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong unaff_R12;
  longlong lVar19;
  longlong lVar20;
  longlong unaff_R13;
  longlong unaff_R15;
  ulonglong uVar21;
  bool bVar22;
  bool bVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong unaff_retaddr;
  undefined1 uStack0000000000000030;
  char local_38;
  char local_37;
  undefined8 *local_30;
  
  uVar2 = (&switchD_007194ae::switchdataD_001b83e8)[*param_2];
  uVar6 = uVar2 + 0x1b83e8;
  lVar19 = unaff_R12;
  lVar20 = unaff_R13;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    uVar17 = *param_3;
    pcVar15 = 
    "null\x1eTC:webpInit$refdateuserhttptext-lowSomecragtruePATHTERMLANGurlsseedGonemainBodycharbusyalseSTOPenumh"
    ;
    uVar13 = 4;
    break;
  case 1:
    uVar17 = *param_3;
    if (param_2[1] == 0) {
      pcVar15 = "false";
      uVar13 = 5;
    }
    else {
      pcVar15 = "truePATHTERMLANGurlsseed";
      uVar13 = 4;
    }
    break;
  case 2:
    puVar8 = (undefined8 *)
             <serde_json[dc3825464c436029]::number::Number_as_serde_core[48776c27239fa21f]::ser::Serialize>
             ::serialize::
             <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::PrettyFormatter>>
                       (param_2 + 8);
    return puVar8;
  case 3:
    unaff_RBP = serde_json[dc3825464c436029]::ser::format_escaped_str::
                <&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::PrettyFormatter>
                          (param_3,param_3,*(undefined8 *)(param_2 + 0x10),
                           *(undefined8 *)(param_2 + 0x18));
    goto LAB_00719847;
  case 4:
    puVar8 = (undefined8 *)
             <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::Serializer>
             ::collect_seq::
             <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
                       (param_3,param_2 + 8);
    return puVar8;
  case 5:
    lVar20 = *(longlong *)(param_2 + 0x18);
    uVar17 = *param_3;
    lVar19 = param_3[3];
    param_3[3] = lVar19 + 1;
    *(undefined1 *)(param_3 + 4) = 0;
    lVar7 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
            ::write_all(uVar17,"{",1);
    if (lVar7 == 0) {
      cVar5 = '\x01';
      if (lVar20 == 0) {
        param_3[3] = lVar19;
        lVar19 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                 ::write_all(uVar17,"}",1);
        if (lVar19 != 0) goto LAB_00719828;
        cVar5 = '\0';
      }
      local_37 = cVar5;
      local_38 = '\0';
      uVar10 = *(ulonglong *)(param_2 + 8);
      uVar18 = *(ulonglong *)(param_2 + 0x10);
      bVar23 = uVar10 != 0;
      if (!bVar23) {
        lVar20 = 0;
      }
      uVar11 = 0;
      local_30 = param_3;
      while( true ) {
        puVar8 = local_30;
        bVar22 = lVar20 == 0;
        lVar20 = lVar20 + -1;
        if (bVar22) break;
        if (!bVar23) {
          (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (uVar11 == 0) {
          if (uVar18 == 0) {
            uVar18 = 0;
            uVar12 = 0;
            if (*(short *)(uVar10 + 0x272) != 0) goto LAB_00719623;
            goto LAB_007196e0;
          }
          uVar11 = uVar18;
          if ((uVar18 & 7) != 0) {
            uVar11 = 0;
            do {
              uVar10 = *(ulonglong *)(uVar10 + 0x278);
              uVar11 = uVar11 + 1;
            } while ((uVar18 & 7) != uVar11);
            uVar11 = uVar18 - uVar11;
          }
          if (7 < uVar18) {
            do {
              uVar10 = *(ulonglong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(uVar10 + 0x278) + 0x278) + 0x278) +
                                0x278) + 0x278) + 0x278) + 0x278) + 0x278);
              uVar11 = uVar11 - 8;
            } while (uVar11 != 0);
          }
          uVar18 = 0;
          uVar12 = 0;
          if (*(short *)(uVar10 + 0x272) == 0) goto LAB_007196e0;
LAB_00719623:
          uVar14 = uVar18;
          uVar21 = uVar10;
        }
        else {
          uVar12 = uVar10;
          uVar10 = uVar11;
          if (uVar18 < *(ushort *)(uVar11 + 0x272)) goto LAB_00719623;
LAB_007196e0:
          do {
            uVar21 = *(ulonglong *)(uVar10 + 0x160);
            if (uVar21 == 0) goto LAB_007198a6;
            uVar12 = uVar12 + 1;
            puVar1 = (ushort *)(uVar10 + 0x270);
            uVar14 = (ulonglong)*puVar1;
            uVar10 = uVar21;
          } while (*(ushort *)(uVar21 + 0x272) <= *puVar1);
        }
        uVar11 = uVar21;
        if (uVar12 == 0) {
          uVar18 = uVar14 + 1;
        }
        else {
          puVar16 = (ulonglong *)(uVar21 + uVar14 * 8 + 0x280);
          uVar18 = uVar12;
          if ((uVar12 & 7) != 0) {
            uVar18 = 0;
            do {
              uVar11 = *puVar16;
              puVar16 = (ulonglong *)(uVar11 + 0x278);
              uVar18 = uVar18 + 1;
            } while ((uVar12 & 7) != uVar18);
            uVar18 = uVar12 - uVar18;
          }
          if (7 < uVar12) {
            do {
              uVar11 = *(ulonglong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(*puVar16 + 0x278) + 0x278) + 0x278) +
                              0x278) + 0x278) + 0x278) + 0x278);
              puVar16 = (ulonglong *)(uVar11 + 0x278);
              uVar18 = uVar18 - 8;
            } while (uVar18 != 0);
          }
          uVar18 = 0;
        }
        puVar8 = (undefined8 *)
                 <serde_json[dc3825464c436029]::ser::Compound<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                 ::serialize_entry::
                 <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>
                           (&local_38,uVar21 + uVar14 * 0x18 + 0x168,uVar14 * 0x20 + uVar21);
        bVar23 = true;
        uVar10 = 0;
        if (puVar8 != (undefined8 *)0x0) {
          return puVar8;
        }
      }
      if (local_38 == '\x01') {
        (*(code *)PTR_panic_00799338)
                  (uVar10,&
                          PTR_anon_dd81358582bfba60c2fc675a0b056dad_4_llvm_5330800135125066393_00795ad8
                  );
LAB_007198a6:
        (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (local_37 == '\0') {
        return (undefined8 *)0x0;
      }
      uVar17 = *local_30;
      lVar20 = local_30[3];
      local_30[3] = lVar20 + -1;
      if (*(char *)(local_30 + 4) == '\x01') {
        lVar19 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                 ::write_all(uVar17,"\n",1);
        if (lVar19 == 0) {
          uVar13 = puVar8[1];
          uVar3 = puVar8[2];
          do {
            lVar20 = lVar20 + -1;
            if (lVar20 == 0) goto LAB_0071985c;
            lVar19 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                     ::write_all(uVar17,uVar13,uVar3);
          } while (lVar19 == 0);
        }
      }
      else {
LAB_0071985c:
        lVar20 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                 ::write_all(uVar17,"}",1);
        if (lVar20 == 0) {
          return (undefined8 *)0x0;
        }
      }
    }
LAB_00719828:
    puVar8 = (undefined8 *)(*(code *)PTR_io_00799780)();
    return puVar8;
  case 6:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  case 7:
    out(param_4,uVar6);
    cVar5 = (**(code **)((longlong)&UINT_001b83f8 + (longlong)(int)uVar2))();
    param_1 = extraout_XMM0_Da_01;
    if (cVar5 != '\0') {
      while (cVar5 = (*(code *)PTR_write_str_00799488)(param_1,unaff_R12), cVar5 == '\0') {
        unaff_R15 = unaff_R15 + 1;
        param_1 = extraout_XMM0_Da_00;
        if (unaff_R15 == lVar20) {
          do {
            do {
              puVar8 = local_30;
              puVar9 = (undefined8 *)
                       <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::PrettyFormatter>>
                                 (lVar19,local_30);
              if (puVar9 != (undefined8 *)0x0) {
                return puVar9;
              }
              lVar19 = lVar19 + 0x20;
              *(undefined1 *)(puVar8 + 4) = 1;
              if (lVar19 == unaff_RBX) {
                uVar17 = *puVar8;
                lVar20 = puVar8[3];
                puVar8[3] = lVar20 + -1;
                unaff_RBP = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                            ::write_all(uVar17,"\n",1);
                if (unaff_RBP != 0) goto LAB_00719deb;
                uVar13 = puVar8[1];
                uVar3 = puVar8[2];
                goto LAB_00719dd0;
              }
              unaff_RBP = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                          ::write_all(*puVar8,",\n",2);
              if (unaff_RBP != 0) goto LAB_00719deb;
              lVar20 = local_30[3];
            } while (lVar20 == 0);
            unaff_R12 = local_30[2];
            param_1 = extraout_XMM0_Da;
          } while (unaff_R12 == 0);
code_r0x00719c9e:
          unaff_R15 = 0;
        }
      }
      uVar6 = (*(code *)PTR_<&str>_007991e8)(extraout_XMM0_Da_00,9);
      goto switchD_007194ae_caseD_8;
    }
    goto LAB_00719deb;
  case 8:
switchD_007194ae_caseD_8:
                    /* WARNING: Could not recover jumptable at 0x00719d03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar8 = (undefined8 *)
             (*(code *)(*(int *)(unaff_R13 + (ulonglong)(uVar6 & 3) * 4) + unaff_R13))();
    return puVar8;
  case 9:
    (&UNK_001b8373)[(int)uVar2] = (&UNK_001b8373)[(int)uVar2] + -0x18;
    goto code_r0x00719c9e;
  }
  unaff_RBP = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
              ::write_all(uVar17,pcVar15,uVar13);
LAB_00719847:
  if (unaff_RBP == 0) {
    return (undefined8 *)0x0;
  }
<serde_json[dc3825464c436029]::error::Error>_io:
  *(longlong *)((longlong)register0x00000020 + -8) = unaff_RBX;
  *(undefined8 *)((longlong)register0x00000020 + -0x30) = 1;
  *(longlong *)((longlong)register0x00000020 + -0x28) = unaff_RBP;
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x40) = 0x71f5e1;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  *(undefined8 *)((longlong)register0x00000020 + -0x40) = 0x71f5f1;
  puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar8 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)register0x00000020 + -0x40) = 0x71f626;
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  puVar8[4] = *(undefined8 *)((longlong)register0x00000020 + -0x10);
  uVar17 = *(undefined8 *)((longlong)register0x00000020 + -0x30);
  uVar13 = *(undefined8 *)((longlong)register0x00000020 + -0x28);
  uVar3 = *(undefined8 *)((longlong)register0x00000020 + -0x18);
  puVar8[2] = *(undefined8 *)((longlong)register0x00000020 + -0x20);
  puVar8[3] = uVar3;
  *puVar8 = uVar17;
  puVar8[1] = uVar13;
  return puVar8;
  while (unaff_RBP = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                     ::write_all(uVar17,uVar13,uVar3), unaff_RBP == 0) {
LAB_00719dd0:
    lVar20 = lVar20 + -1;
    if (lVar20 == 0) {
      unaff_RBP = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                  ::write_all(uVar17,"]",1);
      if (unaff_RBP == 0) {
        return (undefined8 *)0x0;
      }
      break;
    }
  }
LAB_00719deb:
  register0x00000020 = (BADSPACEBASE *)&uStack0000000000000030;
  unaff_RBX = unaff_retaddr;
  goto <serde_json[dc3825464c436029]::error::Error>_io;
}


