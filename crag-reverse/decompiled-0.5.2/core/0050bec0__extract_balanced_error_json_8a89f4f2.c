// 0050bec0 extract_balanced_error_json

/* craggemini_core[66f3c71560d70857]::protocol::extract_balanced_error_json */

void __rustcall
craggemini_core[66f3c71560d70857]::protocol::extract_balanced_error_json
          (undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  char *pcVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char *pcVar11;
  bool bVar12;
  ulonglong uVar13;
  bool bVar14;
  char local_88;
  undefined7 uStack_87;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  char *local_60;
  longlong local_58;
  undefined8 local_50;
  longlong lStack_48;
  char *local_40;
  longlong local_38;
  
  uVar13 = 0;
LAB_0050bef3:
  do {
    if (uVar13 != 0) {
      if (uVar13 < param_3) {
        if (*(char *)(param_2 + uVar13) < -0x40) goto LAB_0050c178;
      }
      else if (param_3 != uVar13) {
LAB_0050c178:
        (*(code *)PTR_slice_error_fail_00799408)(param_3,uVar13,&PTR_s_src_protocol_rs_0078cfc8);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_58 = param_3 - uVar13;
    local_60 = (char *)(param_2 + uVar13);
    local_50 = 0;
    local_38 = CONCAT71(local_38._1_7_,1);
    local_40 = (char *)0x7b0000007b;
    lStack_48 = local_58;
    <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(&local_88);
    if (local_88 == '\0') {
      *(undefined1 *)param_1 = 0xff;
      return;
    }
    uVar13 = uVar13 + lStack_80;
    if (param_3 < uVar13) {
      (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s_src_protocol_rs_0078cff8,param_3);
LAB_0050c147:
      param_1[2] = local_78;
      param_1[3] = uStack_70;
      *param_1 = CONCAT71(uStack_87,local_88);
      param_1[1] = lStack_80;
      return;
    }
    if (uVar13 != param_3) {
      pcVar1 = (char *)(param_2 + uVar13);
      bVar12 = false;
      bVar14 = false;
      lVar8 = 0;
      lVar5 = 0;
      pcVar11 = pcVar1;
      do {
        lVar7 = 0;
        lVar6 = lVar5;
        while (cVar4 = pcVar11[lVar7], bVar14) {
          bVar14 = true;
          if (bVar12) {
LAB_0050bfa0:
            bVar12 = false;
          }
          else {
            if (cVar4 == '\"') {
              bVar14 = false;
              goto LAB_0050bfa0;
            }
            if (cVar4 != '\\') goto LAB_0050bfa0;
            bVar14 = true;
            bVar12 = true;
          }
          lVar3 = lVar7 + 1;
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 1;
          if (pcVar11 + lVar3 == (char *)(param_2 + param_3)) goto LAB_0050bef0;
        }
        if (cVar4 == '\"') {
          bVar14 = true;
        }
        else {
          if (cVar4 == '{') {
            lVar8 = lVar8 + 1;
          }
          else if ((cVar4 == '}') && (bVar14 = lVar8 == 0, lVar8 = lVar8 + -1, bVar14 || lVar8 == 0)
                  ) {
            uVar9 = lVar5 + lVar7 + uVar13;
            if (uVar9 < param_3) {
              uVar9 = lVar6 + uVar13 + 1;
              uVar10 = uVar13 + lVar5 + lVar7 + 1;
              if (((uVar13 <= uVar10) && ((param_3 <= uVar13 || uVar13 == 0 || (-0x41 < *pcVar1))))
                 && ((param_3 <= uVar10 ||
                     (uVar9 = uVar10, -0x41 < *(char *)(lVar7 + param_2 + 1 + uVar13 + lVar5))))) {
                local_68 = lVar5 + lVar7 + 1;
                cVar4 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                                  ("\"error\"",7,pcVar1);
                if (cVar4 != '\0') {
                  local_58 = local_68;
                  local_50 = 0;
                  lStack_48 = 0;
                  local_38 = local_68;
                  local_60 = pcVar1;
                  local_40 = pcVar1;
                  serde_json[dc3825464c436029]::de::from_trait::
                  <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
                            (&local_88,&local_60);
                  if (local_88 == -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::error::Error>(&lStack_80);
                    uVar13 = uVar13 + 1;
                  }
                  else {
                    if (local_88 == '\x05') goto LAB_0050c147;
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_88);
                    uVar13 = uVar13 + 1;
                  }
                  goto LAB_0050bef3;
                }
                break;
              }
            }
            (*(code *)PTR_slice_error_fail_00799408)(uVar9,uVar13,&PTR_s_src_protocol_rs_0078cfe0);
            goto LAB_0050c178;
          }
          bVar14 = false;
        }
        pcVar11 = pcVar11 + lVar7 + 1;
        lVar5 = lVar5 + lVar7 + 1;
      } while (pcVar11 != (char *)(param_2 + param_3));
    }
LAB_0050bef0:
    uVar13 = uVar13 + 1;
  } while( true );
}


