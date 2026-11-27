// 006bdbc0 parse_headers_iter_uninit

/* httparse[622c0e90ae307373]::parse_headers_iter_uninit */

void __rustcall
httparse[622c0e90ae307373]::parse_headers_iter_uninit
          (undefined8 *param_1,undefined8 *param_2,ulonglong *param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined *puVar8;
  byte bVar9;
  short sVar10;
  uint uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  longlong lVar18;
  byte *pbVar19;
  ulonglong *puVar20;
  byte *pbVar21;
  ulonglong uVar22;
  code *pcVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  ulonglong *local_48;
  
  puVar5 = (ulonglong *)param_3[2];
  *(undefined1 *)(param_1 + 1) = 5;
  *param_1 = 2;
  puVar8 = PTR_TOKEN_MAP_0079a508;
  puVar20 = (ulonglong *)param_3[1];
  if (puVar20 <= puVar5) {
    uVar22 = 0;
LAB_006be447:
    *param_1 = 1;
LAB_006be46f:
    param_2[1] = uVar22;
    return;
  }
  local_48 = (ulonglong *)*param_2;
  uVar6 = param_2[1];
  puVar12 = local_48 + uVar6 * 4;
  bVar1 = param_4[2];
  cVar2 = param_4[3];
  cVar3 = *param_4;
  cVar4 = param_4[1];
  uVar22 = 0;
  puVar17 = puVar5;
  pcVar23 = (code *)PTR_detect_and_initialize_0079a268;
LAB_006bdc46:
LAB_006bdc50:
  bVar9 = (byte)*puVar17;
  uVar13 = (ulonglong)bVar9;
  puVar14 = (ulonglong *)((longlong)puVar17 + 1);
  param_3[2] = (ulonglong)puVar14;
  if (uVar13 == 10) {
    *param_1 = 0;
    param_1[1] = (longlong)puVar14 - (longlong)puVar5;
    goto LAB_006be46f;
  }
  if (bVar9 != 0xd) {
    if (puVar8[uVar13] == '\0') {
      if (((uVar22 == 0 & bVar1) == 0) || ((bVar9 != 0x20 && (bVar9 != 9)))) {
        if ((cVar2 != '\0') && (bVar9 != 0)) {
          while( true ) {
            puVar17 = puVar14;
            if ((int)uVar13 == 10) break;
            if ((int)uVar13 == 0xd) goto LAB_006bdfc3;
            if (puVar20 <= puVar14) goto LAB_006be447;
            uVar24 = *puVar14;
            uVar13 = (ulonglong)(byte)uVar24;
            puVar14 = (ulonglong *)((longlong)puVar14 + 1);
            param_3[2] = (ulonglong)puVar14;
            if ((byte)uVar24 == 0) goto LAB_006be463;
          }
          goto LAB_006bdfe0;
        }
LAB_006be463:
        *(undefined1 *)(param_1 + 1) = 0;
        goto LAB_006be468;
      }
      puVar17 = puVar14;
      if (puVar14 < puVar20) {
        do {
          if (((byte)*puVar14 != 0x20) && (puVar17 = puVar14, (byte)*puVar14 != 9)) break;
          puVar14 = (ulonglong *)((longlong)puVar14 + 1);
          param_3[2] = (ulonglong)puVar14;
          puVar17 = puVar14;
        } while (puVar14 != puVar20);
      }
      goto LAB_006bdfe0;
    }
    for (uVar13 = (longlong)puVar20 - (longlong)puVar14; 7 < uVar13; uVar13 = uVar13 - 8) {
      uVar24 = *puVar14;
      if (puVar8[uVar24 & 0xff] != '\x01') {
        uVar13 = 0;
        goto LAB_006bdd7b;
      }
      if (puVar8[uVar24 >> 8 & 0xff] != '\x01') {
        uVar13 = 1;
        goto LAB_006bdd7b;
      }
      if (puVar8[uVar24 >> 0x10 & 0xff] != '\x01') {
        uVar13 = 2;
        goto LAB_006bdd7b;
      }
      if (puVar8[uVar24 >> 0x18 & 0xff] != '\x01') {
        uVar13 = 3;
        goto LAB_006bdd7b;
      }
      if (puVar8[uVar24 >> 0x20 & 0xff] != '\x01') {
        uVar13 = 4;
        goto LAB_006bdd7b;
      }
      if (puVar8[uVar24 >> 0x28 & 0xff] != '\x01') {
        uVar13 = 5;
        goto LAB_006bdd7b;
      }
      if (puVar8[uVar24 >> 0x30 & 0xff] != '\x01') {
        uVar13 = 6;
        goto LAB_006bdd7b;
      }
      if (puVar8[uVar24 >> 0x38] == '\0') {
        uVar13 = 7;
        goto LAB_006bdd7b;
      }
      puVar14 = puVar14 + 1;
    }
    uVar24 = 0;
    do {
      uVar16 = uVar24;
      if ((ulonglong *)(uVar16 + (longlong)puVar14) == puVar20) goto LAB_006bdd7b;
      uVar24 = uVar16 + 1;
    } while (puVar8[(byte)*(ulonglong *)(uVar16 + (longlong)puVar14)] != '\0');
    uVar13 = uVar16;
LAB_006bdd7b:
    puVar25 = (ulonglong *)((longlong)puVar14 + uVar13);
    param_3[2] = (ulonglong)puVar25;
    if (puVar20 <= puVar25) {
LAB_006be450:
      *param_1 = 1;
      goto LAB_006be457;
    }
    bVar9 = (byte)*puVar25;
    puVar14 = (ulonglong *)((longlong)puVar25 + 1);
    param_3[2] = (ulonglong)puVar14;
    uVar13 = *param_3;
    *param_3 = (ulonglong)puVar14;
    puVar7 = puVar14;
    if (bVar9 == 0x3a) {
joined_r0x006bdeb2:
      while( true ) {
        if (puVar20 <= puVar7) goto LAB_006be450;
        bVar9 = (byte)*puVar7;
        uVar24 = (ulonglong)bVar9;
        puVar17 = (ulonglong *)((longlong)puVar7 + 1);
        param_3[2] = (ulonglong)puVar17;
        if ((uVar24 != 0x20) && (bVar9 != 9)) break;
        *param_3 = (ulonglong)puVar17;
        puVar14 = puVar17;
        puVar7 = puVar17;
      }
      if (""[uVar24] != '\x01') {
        if (bVar9 != 10) {
          if (bVar9 != 0xd) {
            if (cVar2 != '\0') goto joined_r0x006be06d;
            goto LAB_006be4e4;
          }
          if (puVar20 <= puVar17) goto LAB_006be4bc;
          bVar9 = *(byte *)((longlong)puVar7 + 1);
          puVar17 = (ulonglong *)((longlong)puVar7 + 2);
          param_3[2] = (ulonglong)puVar17;
          if (bVar9 != 10) goto LAB_006be4c6;
        }
        if (cVar4 == '\0') goto LAB_006be367;
        if (puVar17 < puVar20) goto code_r0x006bdf3d;
        goto LAB_006be450;
      }
      goto LAB_006be0e0;
    }
    if (cVar3 != '\0') {
      do {
        if ((bVar9 != 0x20) && (bVar9 != 9)) goto LAB_006bdf62;
        if (puVar20 <= puVar14) goto LAB_006be450;
        bVar9 = (byte)*puVar14;
        puVar14 = (ulonglong *)((longlong)puVar14 + 1);
        param_3[2] = (ulonglong)puVar14;
      } while (bVar9 != 0x3a);
      *param_3 = (ulonglong)puVar14;
      puVar7 = puVar14;
      goto joined_r0x006bdeb2;
    }
LAB_006bdf62:
    if (cVar2 == '\0') goto LAB_006be463;
    while( true ) {
      if (bVar9 == 0) goto LAB_006be463;
      puVar17 = puVar14;
      if (bVar9 == 10) goto LAB_006bdfe0;
      if (bVar9 == 0xd) break;
      if (puVar20 <= puVar14) goto LAB_006be447;
      bVar9 = (byte)*puVar14;
      puVar14 = (ulonglong *)((longlong)puVar14 + 1);
      param_3[2] = (ulonglong)puVar14;
    }
LAB_006bdfc3:
    if (puVar20 <= puVar14) goto LAB_006be4ee;
    uVar13 = *puVar14;
    param_3[2] = (longlong)puVar14 + 1U;
    puVar17 = (ulonglong *)((longlong)puVar14 + 1U);
    if ((byte)uVar13 == 10) goto LAB_006bdfe0;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    goto LAB_006be46f;
  }
  uVar15 = 1;
  if (puVar14 < puVar20) {
    bVar1 = *(byte *)((longlong)puVar17 + 1);
    param_3[2] = (longlong)puVar17 + 2U;
    if (bVar1 == 10) {
      *param_1 = 0;
      param_1[1] = (longlong)((longlong)puVar17 + 2U) - (longlong)puVar5;
      goto LAB_006be46f;
    }
    *(undefined1 *)(param_1 + 1) = 2;
    uVar15 = 2;
  }
  *param_1 = uVar15;
  goto LAB_006be46f;
LAB_006be0e0:
  if (simd::runtime::RUNTIME_FEATURE == 0) {
    if (*(longlong *)PTR_CACHE_0079a260 == 0) {
      sVar10 = (*pcVar23)();
      pcVar23 = (code *)PTR_detect_and_initialize_0079a268;
    }
    else {
      sVar10 = (short)*(longlong *)PTR_CACHE_0079a260;
    }
    bVar9 = 1;
    if (-1 < sVar10) {
      if (*(ulonglong *)PTR_CACHE_0079a260 == 0) {
        uVar11 = (*pcVar23)();
        bVar9 = (byte)(uVar11 >> 0xb);
        pcVar23 = (code *)PTR_detect_and_initialize_0079a268;
      }
      else {
        bVar9 = (byte)(*(ulonglong *)PTR_CACHE_0079a260 >> 0xb);
      }
      bVar9 = bVar9 & 1 ^ 3;
    }
    simd::runtime::RUNTIME_FEATURE = bVar9;
    if (bVar9 != 1) goto LAB_006be0f7;
LAB_006be252:
    simd::avx2::match_header_value_vectored(param_3);
  }
  else {
    if (simd::runtime::RUNTIME_FEATURE == 1) goto LAB_006be252;
LAB_006be0f7:
    if (simd::runtime::RUNTIME_FEATURE != 2) {
      do {
        while (7 < (ulonglong)((longlong)puVar20 - (longlong)puVar17)) {
          uVar24 = *puVar17;
          uVar24 = ((uVar24 ^ 0x7f7f7f7f7f7f7f7f) + 0xfefefefefefefeff | uVar24 + 0xdfdfdfdfdfdfdfe0
                   ) & ~uVar24;
          if ((uVar24 & 0x8080808080808080) != 0) {
            if ((char)uVar24 < '\0') {
              lVar18 = 0;
            }
            else {
              lVar18 = 1;
              if (-1 < (short)uVar24) {
                lVar18 = 2;
                if (((((uVar24 & 0x800000) == 0) && (lVar18 = 3, -1 < (int)uVar24)) &&
                    (lVar18 = 4, (uVar24 >> 0x27 & 1) == 0)) &&
                   (lVar18 = 5, (uVar24 >> 0x2f & 1) == 0)) {
                  lVar18 = 7 - (ulonglong)((uVar24 >> 0x37 & 1) != 0);
                }
              }
            }
            puVar17 = (ulonglong *)((longlong)puVar17 + lVar18);
            param_3[2] = (ulonglong)puVar17;
            break;
          }
          puVar17 = puVar17 + 1;
          param_3[2] = (ulonglong)puVar17;
        }
        if ((puVar20 <= puVar17) || (""[(byte)*puVar17] != '\x01')) goto LAB_006be260;
        puVar17 = (ulonglong *)((longlong)puVar17 + 1);
        param_3[2] = (ulonglong)puVar17;
      } while( true );
    }
    simd::sse42::match_header_value_vectored(param_3);
  }
LAB_006be260:
  puVar20 = (ulonglong *)param_3[1];
  puVar14 = (ulonglong *)param_3[2];
  if (puVar20 <= puVar14) goto LAB_006be450;
  bVar9 = (byte)*puVar14;
  puVar17 = (ulonglong *)((longlong)puVar14 + 1);
  param_3[2] = (ulonglong)puVar17;
  lVar18 = -1;
  if (bVar9 != 10) {
    if (bVar9 != 0xd) goto LAB_006be2e4;
    if (puVar20 <= puVar17) goto LAB_006be4bc;
    bVar9 = *(byte *)((longlong)puVar14 + 1);
    puVar17 = (ulonglong *)((longlong)puVar14 + 2);
    param_3[2] = (ulonglong)puVar17;
    lVar18 = -2;
    if (bVar9 != 10) goto LAB_006be4c6;
  }
  if (cVar4 == '\0') goto LAB_006be3ca;
  if (puVar17 < puVar20) goto code_r0x006be2c8;
  goto LAB_006be450;
LAB_006be2e4:
  if (cVar2 == '\0') {
LAB_006be4e4:
    *(undefined1 *)(param_1 + 1) = 1;
LAB_006be468:
    *param_1 = 2;
    goto LAB_006be46f;
  }
  while( true ) {
    if (bVar9 == 0) goto LAB_006be4e4;
    if (bVar9 == 10) goto LAB_006bdfe0;
    if (bVar9 == 0xd) break;
    if (puVar20 <= puVar17) goto LAB_006be447;
    bVar9 = (byte)*puVar17;
    puVar17 = (ulonglong *)((longlong)puVar17 + 1);
    param_3[2] = (ulonglong)puVar17;
  }
LAB_006be345:
  if (puVar20 <= puVar17) {
LAB_006be4ee:
    *param_1 = 1;
    goto LAB_006be46f;
  }
  uVar13 = *puVar17;
  param_3[2] = (longlong)puVar17 + 1U;
  puVar17 = (ulonglong *)((longlong)puVar17 + 1U);
  if ((byte)uVar13 != 10) {
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    goto LAB_006be46f;
  }
LAB_006bdfe0:
  *param_3 = (ulonglong)puVar17;
  if (puVar20 <= puVar17) goto LAB_006be447;
  goto LAB_006bdc50;
code_r0x006be2c8:
  if (((byte)*puVar17 != 9) && ((byte)*puVar17 != 0x20)) {
LAB_006be3ca:
    puVar14 = (ulonglong *)*param_3;
    *param_3 = (ulonglong)puVar17;
    if (local_48 == puVar12) goto LAB_006be50d;
    uVar24 = (longlong)puVar25 - uVar13;
    pbVar19 = (byte *)((longlong)puVar17 + (lVar18 - (longlong)puVar14));
    if (pbVar19 == (byte *)0x0) {
      pbVar21 = (byte *)0x0;
      goto LAB_006be384;
    }
    pbVar21 = pbVar19;
    goto LAB_006be3f0;
  }
  goto LAB_006be0e0;
  while (pbVar21 = pbVar21 + -1, pbVar21 != (byte *)0x0) {
LAB_006be3f0:
    if ((0x20 < (ulonglong)*(byte *)((longlong)puVar14 + (longlong)(pbVar21 + -1))) ||
       ((0x100002600U >> ((ulonglong)*(byte *)((longlong)puVar14 + (longlong)(pbVar21 + -1)) & 0x3f)
        & 1) == 0)) {
      if (pbVar19 < pbVar21) {
        (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__vendor_httparse_1_10_1_src_lib__00792c98);
                    /* WARNING: Does not return */
        pcVar23 = (code *)invalidInstructionException();
        (*pcVar23)();
      }
      goto LAB_006be384;
    }
  }
  pbVar21 = pbVar19;
LAB_006be384:
  *local_48 = uVar13;
  local_48[1] = uVar24;
  local_48[2] = (ulonglong)puVar14;
  local_48[3] = (ulonglong)pbVar21;
  local_48 = local_48 + 4;
  uVar22 = uVar22 + 1;
  if (puVar20 <= puVar17) goto LAB_006be447;
  goto LAB_006bdc46;
joined_r0x006be06d:
  if (bVar9 == 0) goto LAB_006be4e4;
  if ((int)uVar24 == 10) goto LAB_006bdfe0;
  if ((int)uVar24 == 0xd) goto LAB_006be345;
  if (puVar20 <= puVar17) goto LAB_006be447;
  bVar9 = (byte)*puVar17;
  uVar24 = (ulonglong)bVar9;
  puVar17 = (ulonglong *)((longlong)puVar17 + 1);
  param_3[2] = (ulonglong)puVar17;
  goto joined_r0x006be06d;
LAB_006be4bc:
  *param_1 = 1;
  goto LAB_006be457;
LAB_006be4c6:
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
LAB_006be457:
  goto LAB_006be46f;
code_r0x006bdf3d:
  puVar7 = puVar17;
  if (((byte)*puVar17 != 9) && ((byte)*puVar17 != 0x20)) {
LAB_006be367:
    *param_3 = (ulonglong)puVar17;
    if (local_48 == puVar12) goto LAB_006be50d;
    uVar24 = (longlong)puVar25 - uVar13;
    pbVar21 = (byte *)0x0;
    goto LAB_006be384;
  }
  goto joined_r0x006bdeb2;
LAB_006be50d:
  uVar22 = uVar6 & 0x7ffffffffffffff;
  goto LAB_006be46f;
}


