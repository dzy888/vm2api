// 0048ec80 copy_to_bytes

/* WARNING: Switch with 1 destination removed at 0x0048ed84 */
/* <http_body_util[89f9933de382700b]::util::BufList<bytes[e9829e187354639b]::bytes::Bytes> as
   bytes[e9829e187354639b]::buf::buf_impl::Buf>::copy_to_bytes */

ulonglong * __rustcall
<http_body_util[89f9933de382700b]::util::BufList<bytes[e9829e187354639b]::bytes::Bytes>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>
::copy_to_bytes(undefined4 param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
               ulonglong *param_5,undefined8 param_6,ulonglong param_7)

{
  code *pcVar1;
  longlong lVar2;
  undefined *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  ulonglong unaff_R14;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar22;
  ulonglong local_f8;
  ulonglong *puStack_f0;
  ulonglong *local_e8;
  ulonglong uStack_e0;
  ulonglong local_c0;
  ulonglong uStack_b8;
  ulonglong *local_b0;
  ulonglong *puStack_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong *puStack_90;
  ulonglong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong *local_78;
  ulonglong *local_58;
  ulonglong local_50;
  ulonglong *puStack_48;
  ulonglong *local_40;
  undefined8 uStack_38;
  
  uVar19 = param_3[3];
  if (uVar19 == 0) {
    puVar12 = (ulonglong *)0x0;
    local_e8 = param_4;
    puVar4 = (ulonglong *)param_3[1];
    local_78 = param_2;
    goto LAB_0048ed54;
  }
  unaff_R14 = param_3[2];
  puVar4 = (ulonglong *)*param_3;
  param_5 = (ulonglong *)0x0;
  if (puVar4 <= unaff_R14) {
    param_5 = puVar4;
  }
  puVar17 = (ulonglong *)param_3[1];
  param_7 = unaff_R14 - (longlong)param_5;
  local_e8 = puVar17 + param_7 * 4;
  uVar20 = (ulonglong *)puVar17[param_7 * 4 + 2] < param_4;
  uVar21 = false;
  if ((ulonglong *)puVar17[param_7 * 4 + 2] == param_4) {
    (*(code *)PTR_copy_to_bytes_00799a90)();
    puVar12 = (ulonglong *)0;
    if (puVar4 <= unaff_R14 + 1) {
      puVar12 = puVar4;
    }
    param_3[2] = unaff_R14 + -(longlong)puVar12 + 1;
    param_3[3] = uVar19 - 1;
    puVar4 = (ulonglong *)0x0;
    if (puVar17[unaff_R14 * 4] != 0) {
      puVar4 = (ulonglong *)
               (**(code **)(puVar17[unaff_R14 * 4] + 0x20))
                         (-(longlong)puVar12,puVar17[unaff_R14 * 4 + 2]);
    }
    param_2[2] = (ulonglong)local_b0;
    param_2[3] = (ulonglong)puStack_a8;
    *param_2 = local_c0;
    param_2[1] = uStack_b8;
    return puVar4;
  }
LAB_0048ed71:
  if (!(bool)uVar20 && !(bool)uVar21) {
    uStack_38 = &puStack_48;
    local_40 = (ulonglong *)local_e8[2];
    if (param_4 == local_40) {
      uVar19 = local_e8[1];
      uVar5 = *local_e8;
      uVar15 = local_e8[1];
      uVar11 = local_e8[3];
      param_2[2] = local_e8[2];
      param_2[3] = uVar11;
      *param_2 = uVar5;
      param_2[1] = uVar15;
      *local_e8 = (ulonglong)&anon_e1419182c2f95519b50f33ebe2147d9d_4_llvm_4643690396931717954;
      local_e8[1] = (longlong)param_4 + uVar19;
      local_e8[2] = 0;
      local_e8[3] = 0;
    }
    else if (param_4 == (ulonglong *)0x0) {
      param_2[1] = local_e8[1];
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = (ulonglong)&anon_e1419182c2f95519b50f33ebe2147d9d_4_llvm_4643690396931717954;
    }
    else {
      puStack_48 = param_4;
      if (local_40 < param_4) {
        local_50 = 0x70eb01;
        (*(code *)PTR_panic_fmt_007991a8)
                  (&local_40,
                   &PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_00795878);
        pcVar1 = (code *)swi(3);
        puVar4 = (ulonglong *)(*pcVar1)();
        return puVar4;
      }
      local_50 = 0x70ea89;
      (**(code **)*local_e8)(local_40,local_e8[1]);
      local_e8[2] = local_e8[2] - (longlong)param_4;
      local_e8[1] = local_e8[1] + (longlong)param_4;
      param_2[2] = (ulonglong)param_4;
    }
    return param_2;
  }
  uVar15 = (longlong)puVar4 - param_7;
  uVar5 = (uVar19 - uVar15) * 0x20;
  puVar12 = (ulonglong *)0x0;
  if (uVar19 <= uVar15) {
    uVar5 = 0;
  }
  puVar9 = (ulonglong *)(param_7 + uVar19);
  if (uVar15 < uVar19) {
    puVar9 = puVar4;
  }
  uVar15 = (longlong)puVar9 - param_7;
  if (uVar15 != 0) {
    if (uVar15 < 4) {
      uVar11 = 0;
      puVar12 = (ulonglong *)0x0;
    }
    else {
      puVar4 = puVar17 + (longlong)param_5 * -4 + unaff_R14 * 4 + 0xe;
      uVar11 = 0;
      puVar12 = (ulonglong *)0x0;
      do {
        puVar12 = (ulonglong *)
                  ((longlong)puVar12 + *puVar4 + puVar4[-4] + puVar4[-8] + puVar4[-0xc]);
        uVar11 = uVar11 + 4;
        puVar4 = puVar4 + 0x10;
      } while ((uVar15 & 0xfffffffffffffffc) != uVar11);
      param_7 = 0;
      if ((uVar15 & 3) == 0) goto LAB_0048f06d;
    }
    lVar18 = unaff_R14 * 0x20;
    lVar6 = (longlong)param_5 * -0x20;
    param_5 = puVar17 + (longlong)param_5 * -4 + uVar11 * 4 + unaff_R14 * 4 + 2;
    param_7 = (ulonglong)(((uint)uVar15 & 3) << 5);
    uVar15 = 0;
    do {
      puVar12 = (ulonglong *)((longlong)puVar12 + *(longlong *)((longlong)param_5 + uVar15));
      uVar15 = uVar15 + 0x20;
      unaff_R14 = lVar18 + uVar11 * 0x20 + lVar6;
    } while (param_7 != uVar15);
  }
LAB_0048f06d:
  local_e8 = param_4;
  puVar4 = puVar17;
  local_78 = param_2;
  if (uVar5 != 0) {
    uVar15 = uVar5 >> 5;
    if (uVar5 < 0x80) {
      uVar5 = 0;
    }
    else {
      puVar9 = puVar17 + 0xe;
      uVar5 = 0;
      do {
        puVar12 = (ulonglong *)
                  ((longlong)puVar12 + *puVar9 + puVar9[-4] + puVar9[-8] + puVar9[-0xc]);
        uVar5 = uVar5 + 4;
        puVar9 = puVar9 + 0x10;
      } while ((uVar15 & 0xfffffffffffffffc) != uVar5);
      param_5 = (ulonglong *)0x0;
      if ((uVar15 & 3) == 0) goto LAB_0048ed54;
    }
    param_5 = (ulonglong *)(ulonglong)(((uint)uVar15 & 3) << 5);
    param_4 = (ulonglong *)0x0;
    do {
      puVar12 = (ulonglong *)
                ((longlong)puVar12 +
                *(longlong *)((longlong)(puVar17 + uVar5 * 4 + 2) + (longlong)param_4));
      param_4 = param_4 + 4;
    } while (param_5 != param_4);
  }
LAB_0048ed54:
  if (puVar12 < local_e8) {
    (*(code *)PTR_<&str>_00799aa0)(param_1,&PTR_s__vendor_http_body_util_0_1_5_src_0078ae48);
    goto LAB_0048fb77;
  }
  if ((longlong)local_e8 < 0) {
    param_2 = (ulonglong *)0x0;
LAB_0048ed65:
    uVar21 = 1;
    uVar20 = 0;
    param_1 = (*(code *)PTR_handle_error_00798ff0)();
    param_3 = param_2;
    puVar17 = local_e8;
    goto LAB_0048ed71;
  }
  if (local_e8 == (ulonglong *)0x0) {
    local_f8 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    param_2 = (ulonglong *)0x1;
    local_f8 = (*(code *)PTR___rust_alloc_00799000)();
    param_1 = extraout_XMM0_Da;
    if (local_f8 == 0) goto LAB_0048ed65;
  }
  uVar5 = 0x3f;
  if ((ulonglong)local_e8 >> 10 != 0) {
    for (; ((ulonglong)local_e8 >> 10) >> uVar5 == 0; uVar5 = uVar5 - 1) {
    }
  }
  uVar15 = (uVar5 ^ 0xffffffffffffffc0) + 0x41;
  uVar5 = 7;
  if (uVar15 < 7) {
    uVar5 = uVar15;
  }
  uStack_e0 = (uVar5 & 0xffffffff) * 4 + 1;
  puStack_f0 = (ulonglong *)0x0;
  puVar17 = (ulonglong *)*param_3;
  if (puVar12 == local_e8) {
    if (uVar19 == 0) {
      lVar18 = 0;
      puVar12 = (ulonglong *)0x0;
      lVar6 = 0;
    }
    else {
      puVar12 = (ulonglong *)0x0;
      if (puVar17 <= (ulonglong *)param_3[2]) {
        puVar12 = puVar17;
      }
      lVar18 = (longlong)param_3[2] - (longlong)puVar12;
      lVar6 = uVar19 - ((longlong)puVar17 - lVar18);
      if (uVar19 < (ulonglong)((longlong)puVar17 - lVar18) || lVar6 == 0) {
        puVar12 = (ulonglong *)(lVar18 + uVar19);
        lVar6 = 0;
      }
      else {
        puVar12 = puVar17;
      }
    }
    puVar9 = puVar4 + lVar18 * 4;
    lVar18 = (longlong)puVar12 * 0x20 + lVar18 * -0x20;
    while (lVar18 != 0) {
      lVar18 = lVar18 + -0x20;
      puVar12 = puVar9 + 2;
      puVar9 = puVar9 + 4;
      if (*puVar12 != 0) goto LAB_0048ef78;
    }
    lVar6 = lVar6 << 5;
    puVar12 = puVar4;
    do {
      if (lVar6 == 0) goto LAB_0048fa7d;
      lVar6 = lVar6 + -0x20;
      puVar9 = puVar12 + 2;
      puVar12 = puVar12 + 4;
    } while (*puVar9 == 0);
LAB_0048ef78:
    if (local_e8 == (ulonglong *)0x0) {
      if (uVar19 == 0) {
        lVar6 = 0;
      }
      else {
        puVar12 = (ulonglong *)param_3[2];
        lVar6 = 0;
        puVar9 = puVar17;
        if (puVar12 < puVar17) {
          puVar9 = (ulonglong *)0x0;
        }
        lVar18 = (longlong)puVar12 - (longlong)puVar9;
        uVar15 = (longlong)puVar17 - lVar18;
        uVar5 = (uVar19 - uVar15) * 0x20;
        if (uVar19 <= uVar15) {
          uVar5 = 0;
        }
        puVar14 = (ulonglong *)(lVar18 + uVar19);
        if (uVar15 < uVar19) {
          puVar14 = puVar17;
        }
        uVar19 = (longlong)puVar14 - lVar18;
        if (uVar19 != 0) {
          if (uVar19 < 4) {
            uVar15 = 0;
            lVar6 = 0;
          }
          else {
            puVar17 = puVar4 + (longlong)puVar9 * -4 + (longlong)puVar12 * 4 + 0xe;
            uVar15 = 0;
            lVar6 = 0;
            do {
              lVar6 = lVar6 + puVar17[-0xc] + puVar17[-8] + puVar17[-4] + *puVar17;
              uVar15 = uVar15 + 4;
              puVar17 = puVar17 + 0x10;
            } while ((uVar19 & 0xfffffffffffffffc) != uVar15);
            if ((uVar19 & 3) == 0) goto LAB_0048f91d;
          }
          uVar11 = 0;
          do {
            lVar6 = lVar6 + *(longlong *)
                             ((longlong)puVar4 +
                             uVar11 + (longlong)puVar12 * 0x20 + uVar15 * 0x20 +
                                      (longlong)puVar9 * -0x20 + 0x10);
            uVar11 = uVar11 + 0x20;
          } while (((uint)uVar19 & 3) << 5 != uVar11);
        }
LAB_0048f91d:
        if (uVar5 != 0) {
          uVar19 = uVar5 >> 5;
          if (uVar5 < 0x80) {
            uVar5 = 0;
          }
          else {
            puVar12 = puVar4 + 0xe;
            uVar5 = 0;
            do {
              lVar6 = lVar6 + puVar12[-0xc] + puVar12[-8] + puVar12[-4] + *puVar12;
              uVar5 = uVar5 + 4;
              puVar12 = puVar12 + 0x10;
            } while ((uVar19 & 0xfffffffffffffffc) != uVar5);
            if ((uVar19 & 3) == 0) goto LAB_0048f99d;
          }
          uVar15 = 0;
          do {
            lVar6 = lVar6 + *(longlong *)((longlong)puVar4 + uVar15 + uVar5 * 0x20 + 0x10);
            uVar15 = uVar15 + 0x20;
          } while (((uint)uVar19 & 3) << 5 != uVar15);
        }
      }
LAB_0048f99d:
      copy_to_bytes(&local_50,param_3,lVar6);
      local_88 = local_40;
      uStack_80 = (undefined4)uStack_38;
      uStack_7c = uStack_38._4_4_;
      local_98 = local_50;
      puStack_90 = puStack_48;
      uVar22 = (*(code *)PTR_try_into_mut_00799a98)();
      if ((char)local_c0 == '\0') {
        (*(code *)PTR_drop_007994e8)();
        local_e8 = puStack_a8;
        uStack_e0 = local_a0;
        local_f8 = uStack_b8;
        puStack_f0 = local_b0;
      }
      else {
        if (puStack_a8 != (ulonglong *)0x0) {
          uVar22 = (*(code *)PTR_reserve_inner_00799a30)(uVar22,1);
        }
        (*(code *)PTR_memcpy_00799008)(uVar22,puStack_a8);
        if (puStack_a8 != (ulonglong *)0x0) {
          (*(code *)PTR_panic_advance_00799a48)();
          goto LAB_0048fc0e;
        }
        puStack_f0 = puStack_a8;
        (**(code **)(uStack_b8 + 0x20))(0,0);
      }
      goto LAB_0048fa7d;
    }
    if (uVar19 != 0) {
      puVar12 = (ulonglong *)param_3[2];
      puVar14 = (ulonglong *)0x0;
      puVar9 = puVar17;
      if (puVar12 < puVar17) {
        puVar9 = (ulonglong *)0x0;
      }
      lVar6 = (longlong)puVar12 - (longlong)puVar9;
      uVar15 = (longlong)puVar17 - lVar6;
      uVar5 = (uVar19 - uVar15) * 0x20;
      if (uVar19 <= uVar15) {
        uVar5 = 0;
      }
      puVar16 = (ulonglong *)(lVar6 + uVar19);
      if (uVar15 < uVar19) {
        puVar16 = puVar17;
      }
      uVar15 = (longlong)puVar16 - lVar6;
      if (uVar15 != 0) {
        if (uVar15 < 4) {
          uVar11 = 0;
          puVar14 = (ulonglong *)0x0;
        }
        else {
          puVar16 = puVar4 + (longlong)puVar9 * -4 + (longlong)puVar12 * 4 + 0xe;
          uVar11 = 0;
          puVar14 = (ulonglong *)0x0;
          do {
            puVar14 = (ulonglong *)
                      ((longlong)puVar14 + *puVar16 + puVar16[-4] + puVar16[-8] + puVar16[-0xc]);
            uVar11 = uVar11 + 4;
            puVar16 = puVar16 + 0x10;
          } while ((uVar15 & 0xfffffffffffffffc) != uVar11);
          if ((uVar15 & 3) == 0) goto LAB_0048f5dd;
        }
        puVar12 = puVar4 + (longlong)puVar9 * -4 + uVar11 * 4 + (longlong)puVar12 * 4 + 2;
        uVar11 = 0;
        do {
          puVar14 = (ulonglong *)((longlong)puVar14 + *(longlong *)((longlong)puVar12 + uVar11));
          uVar11 = uVar11 + 0x20;
        } while (((uint)uVar15 & 3) << 5 != uVar11);
      }
LAB_0048f5dd:
      if (uVar5 != 0) {
        uVar15 = uVar5 >> 5;
        if (uVar5 < 0x80) {
          uVar5 = 0;
        }
        else {
          puVar12 = puVar4 + 0xe;
          uVar5 = 0;
          do {
            puVar14 = (ulonglong *)
                      ((longlong)puVar14 + *puVar12 + puVar12[-4] + puVar12[-8] + puVar12[-0xc]);
            uVar5 = uVar5 + 4;
            puVar12 = puVar12 + 0x10;
          } while ((uVar15 & 0xfffffffffffffffc) != uVar5);
          puVar12 = (ulonglong *)0x0;
          if ((uVar15 & 3) == 0) goto LAB_0048f65d;
        }
        puVar12 = (ulonglong *)(ulonglong)(((uint)uVar15 & 3) << 5);
        puVar9 = (ulonglong *)0x0;
        do {
          puVar14 = (ulonglong *)
                    ((longlong)puVar14 +
                    *(longlong *)((longlong)puVar4 + (longlong)(puVar9 + uVar5 * 4 + 2)));
          puVar9 = puVar9 + 4;
        } while (puVar12 != puVar9);
      }
LAB_0048f65d:
      if (local_e8 < puVar14) {
        param_1 = (*(code *)PTR_reserve_inner_00799a30)(puVar12,1);
      }
    }
    uVar5 = param_3[3];
    puVar12 = (ulonglong *)param_3[2];
LAB_0048f67e:
    puVar9 = puVar12;
    puVar12 = puVar17;
    if (puVar9 < puVar17) {
      puVar12 = (ulonglong *)0x0;
    }
    lVar6 = (longlong)puVar9 - (longlong)puVar12;
    uVar15 = (longlong)puVar17 - lVar6;
LAB_0048f6c5:
    puVar12 = (ulonglong *)(lVar6 + uVar19);
    if (uVar15 < uVar19) {
      puVar12 = puVar17;
    }
    lVar18 = 0;
    if (uVar15 < uVar19) {
      lVar18 = uVar19 - uVar15;
    }
    lVar2 = lVar6;
    if (uVar19 == 0) {
      lVar18 = 0;
      puVar12 = (ulonglong *)0x0;
      lVar2 = 0;
    }
    puVar14 = puVar4 + lVar2 * 4;
    puVar12 = (ulonglong *)((longlong)puVar12 * 0x20 + lVar2 * -0x20);
    do {
      if (puVar12 == (ulonglong *)0x0) {
        lVar18 = lVar18 << 5;
        puVar12 = puVar4;
        goto LAB_0048f730;
      }
      puVar12 = puVar12 + -4;
      puVar16 = puVar14 + 2;
      puVar14 = puVar14 + 4;
    } while (*puVar16 == 0);
    goto LAB_0048f748;
  }
  if (uVar19 != 0) {
    puVar12 = (ulonglong *)param_3[2];
    puVar9 = (ulonglong *)0x0;
    puVar14 = puVar17;
    if (puVar12 < puVar17) {
      puVar14 = (ulonglong *)0x0;
    }
    lVar6 = (longlong)puVar12 - (longlong)puVar14;
    uVar15 = (longlong)puVar17 - lVar6;
    uVar5 = (uVar19 - uVar15) * 0x20;
    if (uVar19 <= uVar15) {
      uVar5 = 0;
    }
    puVar16 = (ulonglong *)(lVar6 + uVar19);
    if (uVar15 < uVar19) {
      puVar16 = puVar17;
    }
    uVar15 = (longlong)puVar16 - lVar6;
    if (uVar15 != 0) {
      if (uVar15 < 4) {
        uVar11 = 0;
        puVar9 = (ulonglong *)0x0;
      }
      else {
        puVar16 = puVar4 + (longlong)puVar14 * -4 + (longlong)puVar12 * 4 + 0xe;
        uVar11 = 0;
        puVar9 = (ulonglong *)0x0;
        do {
          puVar9 = (ulonglong *)
                   ((longlong)puVar9 + *puVar16 + puVar16[-4] + puVar16[-8] + puVar16[-0xc]);
          uVar11 = uVar11 + 4;
          puVar16 = puVar16 + 0x10;
        } while ((uVar15 & 0xfffffffffffffffc) != uVar11);
        if ((uVar15 & 3) == 0) goto LAB_0048f1cd;
      }
      uVar13 = 0;
      do {
        puVar9 = (ulonglong *)
                 ((longlong)puVar9 +
                 *(longlong *)
                  ((longlong)puVar4 +
                  uVar13 + (longlong)puVar12 * 0x20 + uVar11 * 0x20 + (longlong)puVar14 * -0x20 +
                           0x10));
        uVar13 = uVar13 + 0x20;
      } while (((uint)uVar15 & 3) << 5 != uVar13);
    }
LAB_0048f1cd:
    if (uVar5 != 0) {
      uVar15 = uVar5 >> 5;
      if (uVar5 < 0x80) {
        uVar5 = 0;
      }
      else {
        puVar12 = puVar4 + 0xe;
        uVar5 = 0;
        do {
          puVar9 = (ulonglong *)
                   ((longlong)puVar9 + *puVar12 + puVar12[-4] + puVar12[-8] + puVar12[-0xc]);
          uVar5 = uVar5 + 4;
          puVar12 = puVar12 + 0x10;
        } while ((uVar15 & 0xfffffffffffffffc) != uVar5);
        if ((uVar15 & 3) == 0) goto LAB_0048f24d;
      }
      uVar11 = 0;
      do {
        puVar9 = (ulonglong *)
                 ((longlong)puVar9 + *(longlong *)((longlong)puVar4 + uVar11 + uVar5 * 0x20 + 0x10))
        ;
        uVar11 = uVar11 + 0x20;
      } while (((uint)uVar15 & 3) << 5 != uVar11);
    }
LAB_0048f24d:
    if (local_e8 < puVar9) {
      puVar9 = local_e8;
    }
    if (puVar9 != (ulonglong *)0x0) {
      uVar5 = param_3[3];
      puVar12 = (ulonglong *)param_3[2];
      puVar9 = local_e8;
      do {
        puVar14 = puVar17;
        if (puVar12 < puVar17) {
          puVar14 = (ulonglong *)0x0;
        }
        lVar6 = (longlong)puVar12 - (longlong)puVar14;
        uVar15 = (longlong)puVar17 - lVar6;
        uVar11 = (uVar19 - uVar15) * 0x20;
        if (uVar19 <= uVar15) {
          uVar11 = 0;
        }
        puVar16 = (ulonglong *)(lVar6 + uVar19);
        if (uVar15 < uVar19) {
          puVar16 = puVar17;
        }
        puVar7 = (ulonglong *)0x0;
        uVar15 = (longlong)puVar16 - lVar6;
        if (uVar15 != 0) {
          if (uVar15 < 4) {
            uVar13 = 0;
            puVar7 = (ulonglong *)0x0;
          }
          else {
            puVar16 = puVar4 + 0xe + lVar6 * 4;
            uVar13 = 0;
            puVar7 = (ulonglong *)0x0;
            do {
              puVar7 = (ulonglong *)
                       ((longlong)puVar7 + *puVar16 + puVar16[-4] + puVar16[-8] + puVar16[-0xc]);
              uVar13 = uVar13 + 4;
              puVar16 = puVar16 + 0x10;
            } while ((uVar15 & 0xfffffffffffffffc) != uVar13);
            if ((uVar15 & 3) == 0) goto LAB_0048f35d;
          }
          uVar10 = 0;
          do {
            puVar7 = (ulonglong *)
                     ((longlong)puVar7 +
                     *(longlong *)
                      ((longlong)puVar4 +
                      uVar10 + (longlong)puVar12 * 0x20 + uVar13 * 0x20 + (longlong)puVar14 * -0x20
                               + 0x10));
            uVar10 = uVar10 + 0x20;
          } while (((uint)uVar15 & 3) << 5 != uVar10);
        }
LAB_0048f35d:
        if (uVar11 != 0) {
          uVar15 = uVar11 >> 5;
          if (uVar11 < 0x80) {
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            puVar14 = puVar4 + 0xe;
            do {
              puVar7 = (ulonglong *)
                       ((longlong)puVar7 + *puVar14 + puVar14[-4] + puVar14[-8] + puVar14[-0xc]);
              uVar11 = uVar11 + 4;
              puVar14 = puVar14 + 0x10;
            } while ((uVar15 & 0x3fffffffffffffc) != uVar11);
            if ((uVar15 & 3) == 0) goto LAB_0048f3dd;
          }
          uVar13 = 0;
          do {
            puVar7 = (ulonglong *)
                     ((longlong)puVar7 +
                     *(longlong *)((longlong)puVar4 + uVar13 + uVar11 * 0x20 + 0x10));
            uVar13 = uVar13 + 0x20;
          } while (((uint)uVar15 & 3) << 5 != uVar13);
        }
LAB_0048f3dd:
        if (puVar9 < puVar7) {
          puVar7 = puVar9;
        }
        if (puVar7 == (ulonglong *)0x0) break;
        puVar14 = (ulonglong *)0x0;
        if (puVar17 <= puVar12) {
          puVar14 = puVar17;
        }
        puVar16 = (ulonglong *)puVar4[((longlong)puVar12 - (longlong)puVar14) * 4 + 2];
        if (puVar9 < (ulonglong *)puVar4[((longlong)puVar12 - (longlong)puVar14) * 4 + 2]) {
          puVar16 = puVar9;
        }
        if ((ulonglong *)((longlong)local_e8 - (longlong)puStack_f0) < puVar16) {
          param_1 = (*(code *)PTR_reserve_inner_00799a30)
                              (((longlong)puVar12 - (longlong)puVar14) * 0x20,1);
        }
        param_1 = (*(code *)PTR_memcpy_00799008)(param_1,puVar16);
        if ((ulonglong *)((longlong)local_e8 - (longlong)puStack_f0) < puVar16) {
LAB_0048fb77:
          (*(code *)PTR_panic_advance_00799a48)();
          goto LAB_0048fc0e;
        }
        puStack_f0 = (ulonglong *)((longlong)puStack_f0 + (longlong)puVar16);
        puVar14 = puVar12;
        if (puVar16 != (ulonglong *)0x0) {
          puVar7 = puVar16;
          do {
            if (uVar19 == 0) goto LAB_0048fb54;
            puVar8 = (ulonglong *)0x0;
            if (puVar17 <= puVar12) {
              puVar8 = puVar17;
            }
            lVar6 = (longlong)puVar12 - (longlong)puVar8;
            puVar8 = (ulonglong *)puVar4[lVar6 * 4 + 2];
            if (puVar7 <= puVar8 && (longlong)puVar8 - (longlong)puVar7 != 0) {
              puVar4[lVar6 * 4 + 2] = (longlong)puVar8 - (longlong)puVar7;
              puVar4[lVar6 * 4 + 1] = puVar4[lVar6 * 4 + 1] + (longlong)puVar7;
              break;
            }
            puVar4[lVar6 * 4 + 2] = 0;
            puVar4[lVar6 * 4 + 1] = puVar4[lVar6 * 4 + 1] + (longlong)puVar8;
            if (uVar5 == 0) {
              uVar19 = 0;
            }
            else {
              puVar14 = (ulonglong *)0x0;
              if (puVar17 <= (ulonglong *)((longlong)puVar12 + 1U)) {
                puVar14 = puVar17;
              }
              puVar14 = (ulonglong *)((longlong)puVar12 + (1 - (longlong)puVar14));
              param_3[2] = (ulonglong)puVar14;
              uVar19 = uVar5 - 1;
              param_3[3] = uVar19;
              uVar15 = puVar4[(longlong)puVar12 * 4];
              uVar5 = uVar19;
              if (uVar15 == 0) {
                puVar12 = puVar14;
              }
              else {
                param_1 = (**(code **)(uVar15 + 0x20))(uVar15,puVar4[(longlong)puVar12 * 4 + 2]);
                puVar12 = puVar14;
              }
            }
            puVar7 = (ulonglong *)((longlong)puVar7 - (longlong)puVar8);
          } while (puVar7 != (ulonglong *)0x0);
        }
        puVar9 = (ulonglong *)((longlong)puVar9 - (longlong)puVar16);
        puVar12 = puVar14;
      } while (uVar19 != 0);
    }
  }
LAB_0048fa7d:
  if ((uStack_e0 & 1) == 0) {
    local_78[1] = local_f8;
    local_78[2] = (ulonglong)puStack_f0;
    local_78[3] = uStack_e0;
    puVar3 = PTR_SHARED_VTABLE_00799a60;
    *local_78 = (ulonglong)PTR_SHARED_VTABLE_00799a60;
    return (ulonglong *)puVar3;
  }
  puVar4 = (ulonglong *)(uStack_e0 >> 5);
  puStack_48 = (ulonglong *)(local_f8 - (longlong)puVar4);
  local_40 = (ulonglong *)((longlong)puStack_f0 + (longlong)puVar4);
  local_50 = (longlong)local_e8 + (longlong)puVar4;
  (*(code *)PTR_from_00799a68)();
  if (puVar4 <= local_88) {
    local_78[2] = (longlong)local_88 - (longlong)puVar4;
    local_78[3] = CONCAT44(uStack_7c,uStack_80);
    *local_78 = local_98;
    local_78[1] = (longlong)puStack_90 + (longlong)puVar4;
    return (ulonglong *)CONCAT44(uStack_7c,uStack_80);
  }
  local_58 = local_88;
  (*(code *)PTR_panic_fmt_007991a8)
            (&local_58,
             &PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_0078adb8);
  goto LAB_0048fc0e;
  while( true ) {
    lVar18 = lVar18 + -0x20;
    puVar14 = puVar12 + 2;
    puVar12 = puVar12 + 4;
    if (*puVar14 != 0) break;
LAB_0048f730:
    if (lVar18 == 0) goto LAB_0048fa7d;
  }
LAB_0048f748:
  if (uVar19 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = puVar4[lVar6 * 4 + 2];
    if ((ulonglong)((longlong)local_e8 - (longlong)puStack_f0) < uVar11) {
      param_1 = (*(code *)PTR_reserve_inner_00799a30)(puVar12,1);
    }
  }
  param_1 = (*(code *)PTR_memcpy_00799008)(param_1,uVar11);
  if ((ulonglong)((longlong)local_e8 - (longlong)puStack_f0) < uVar11) goto LAB_0048fb77;
  puStack_f0 = (ulonglong *)((longlong)puStack_f0 + uVar11);
  if (uVar11 != 0) goto code_r0x0048f7c6;
  goto LAB_0048f6c5;
code_r0x0048f7c6:
  puVar12 = puVar9;
  do {
    if (uVar19 == 0) goto LAB_0048fb54;
    puVar14 = (ulonglong *)0x0;
    if (puVar17 <= puVar9) {
      puVar14 = puVar17;
    }
    lVar6 = (longlong)puVar9 - (longlong)puVar14;
    uVar15 = puVar4[lVar6 * 4 + 2];
    if (uVar11 <= uVar15 && uVar15 - uVar11 != 0) {
      puVar4[lVar6 * 4 + 2] = uVar15 - uVar11;
      puVar4[lVar6 * 4 + 1] = puVar4[lVar6 * 4 + 1] + uVar11;
      break;
    }
    puVar4[lVar6 * 4 + 2] = 0;
    puVar4[lVar6 * 4 + 1] = puVar4[lVar6 * 4 + 1] + uVar15;
    if (uVar5 == 0) {
      uVar19 = 0;
    }
    else {
      puVar12 = (ulonglong *)0x0;
      if (puVar17 <= (ulonglong *)((longlong)puVar9 + 1U)) {
        puVar12 = puVar17;
      }
      puVar12 = (ulonglong *)((longlong)puVar9 + (1 - (longlong)puVar12));
      param_3[2] = (ulonglong)puVar12;
      uVar19 = uVar5 - 1;
      param_3[3] = uVar19;
      uVar13 = puVar4[(longlong)puVar9 * 4];
      uVar5 = uVar19;
      if (uVar13 == 0) {
        puVar9 = puVar12;
      }
      else {
        param_1 = (**(code **)(uVar13 + 0x20))(uVar13,puVar4[(longlong)puVar9 * 4 + 2]);
        puVar9 = puVar12;
      }
    }
    uVar11 = uVar11 - uVar15;
  } while (uVar11 != 0);
  goto LAB_0048f67e;
LAB_0048fb54:
  (*(code *)PTR_expect_failed_00799440)(param_1,&PTR_s__vendor_http_body_util_0_1_5_src_0078ae60);
LAB_0048fc0e:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


