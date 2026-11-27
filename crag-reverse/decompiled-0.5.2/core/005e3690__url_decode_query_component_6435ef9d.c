// 005e3690 url_decode_query_component

/* craggemini_core[66f3c71560d70857]::oauth::url_decode_query_component */

void __rustcall
craggemini_core[66f3c71560d70857]::oauth::url_decode_query_component
          (undefined8 *param_1,char *param_2,char *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  char cVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 uVar13;
  char *local_50;
  int local_48;
  char *local_40;
  ulonglong local_38;
  
  uVar13 = param_3 == (char *)0x0;
  if (-1 < (longlong)param_3) goto LAB_005e36b5;
  puVar2 = (undefined8 *)0x0;
  do {
    param_1 = puVar2;
    uVar13 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = param_3;
LAB_005e36b5:
    if ((bool)uVar13) {
      pcVar6 = (char *)0x1;
      local_50 = (char *)0x0;
      param_3 = (char *)0x0;
      goto LAB_005e3969;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    puVar2 = (undefined8 *)0x1;
  } while (pcVar6 == (char *)0x0);
  local_50 = (char *)0x0;
  pcVar8 = (char *)0x0;
  pcVar3 = local_50;
  do {
    local_50 = pcVar3;
    cVar9 = param_2[(longlong)pcVar8];
    if (cVar9 == '%') {
      if (pcVar8 + 2 < param_3) {
        if (((char *)0xfffffffffffffffc < pcVar8) || (param_3 < pcVar8 + 3)) {
          (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s_src_oauth_rs_0078e798,param_3);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        (*(code *)PTR_from_utf8_00799468)();
        if (local_48 != 1) {
          if (local_38 == 1) {
            cVar9 = *local_40;
            if ((cVar9 != '+') && (cVar9 != '-')) goto LAB_005e37f5;
          }
          else if (local_38 != 0) {
            cVar9 = *local_40;
LAB_005e37f5:
            uVar11 = (ulonglong)(cVar9 == '+');
            pbVar7 = (byte *)(local_40 + uVar11);
            if (local_38 - uVar11 < 3) {
              if (local_38 != uVar11) {
                bVar4 = *pbVar7;
                uVar12 = bVar4 - 0x30;
                if (0x39 < bVar4) {
                  uVar12 = (bVar4 - 0x41 & 0xffffffdf) + 10;
                }
                if (uVar12 < 0x10) {
                  if (local_38 - uVar11 == 1) goto LAB_005e38d0;
                  bVar4 = pbVar7[1];
                  uVar5 = bVar4 - 0x30;
                  if (0x39 < bVar4) {
                    uVar5 = (bVar4 - 0x41 & 0xffffffdf) + 10;
                  }
                  if (uVar5 < 0x10) {
                    bVar4 = (byte)uVar5 | (char)uVar12 << 4;
                    goto joined_r0x005e38da;
                  }
                }
                goto LAB_005e3921;
              }
              bVar4 = 0;
            }
            else {
              lVar10 = 0;
              uVar12 = 0;
              do {
                if (0xf < (byte)uVar12) goto LAB_005e3921;
                bVar4 = pbVar7[lVar10];
                uVar5 = bVar4 - 0x30;
                if (0x39 < bVar4) {
                  uVar5 = (bVar4 - 0x41 & 0xffffffdf) + 10;
                }
                if (0xf < uVar5) goto LAB_005e3921;
                uVar12 = (uint)(byte)((byte)uVar5 | (byte)uVar12 << 4);
                lVar10 = lVar10 + 1;
              } while (lVar10 != local_38 - uVar11);
LAB_005e38d0:
              bVar4 = (byte)uVar12;
            }
joined_r0x005e38da:
            if (local_50 == param_3) {
              (*(code *)PTR_grow_one_007993d0)();
            }
            pcVar6[(longlong)local_50] = bVar4;
            pcVar8 = pcVar8 + 3;
            goto joined_r0x005e371e;
          }
        }
      }
LAB_005e3921:
      *param_1 = 0xffffffffffffffff;
      goto joined_r0x005e3930;
    }
    if (cVar9 == '+') {
      if (local_50 == param_3) {
        (*(code *)PTR_grow_one_007993d0)();
      }
      pcVar6[(longlong)local_50] = ' ';
    }
    else {
      if (local_50 == param_3) {
        (*(code *)PTR_grow_one_007993d0)();
      }
      pcVar6[(longlong)local_50] = cVar9;
    }
    pcVar8 = pcVar8 + 1;
joined_r0x005e371e:
    pcVar3 = local_50 + 1;
  } while (pcVar8 < param_3);
  local_50 = local_50 + 1;
LAB_005e3969:
  (*(code *)PTR_from_utf8_00799468)();
  if ((char)local_48 == '\0') {
    pcVar8 = pcVar6;
  }
  else {
    if (param_3 != (char *)0xffffffffffffffff) {
      *param_1 = 0xffffffffffffffff;
joined_r0x005e3930:
      if (param_3 == (char *)0x0) {
        return;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)();
      return;
    }
    pcVar8 = local_50;
    local_50 = local_40;
    param_3 = pcVar6;
  }
  *param_1 = param_3;
  param_1[1] = pcVar8;
  param_1[2] = local_50;
  return;
}


