// 006be980 match_uri_vectored

/* httparse[622c0e90ae307373]::simd::avx2::match_uri_vectored */

void __rustcall httparse[622c0e90ae307373]::simd::avx2::match_uri_vectored(longlong param_1)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  uint uVar4;
  uint uVar5;
  undefined1 (*pauVar6) [32];
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  
  pauVar1 = *(undefined1 (**) [32])(param_1 + 8);
  pauVar6 = *(undefined1 (**) [32])(param_1 + 0x10);
  auVar10[1] = s___001a7410[0];
  auVar10[0] = s___001a7410[0];
  auVar10[2] = s___001a7410[0];
  auVar10[3] = s___001a7410[0];
  auVar10[4] = s___001a7410[0];
  auVar10[5] = s___001a7410[0];
  auVar10[6] = s___001a7410[0];
  auVar10[7] = s___001a7410[0];
  auVar10[8] = s___001a7410[0];
  auVar10[9] = s___001a7410[0];
  auVar10[10] = s___001a7410[0];
  auVar10[0xb] = s___001a7410[0];
  auVar10[0xc] = s___001a7410[0];
  auVar10[0xd] = s___001a7410[0];
  auVar10[0xe] = s___001a7410[0];
  auVar10[0xf] = s___001a7410[0];
  auVar10[0x10] = s___001a7410[0];
  auVar10[0x11] = s___001a7410[0];
  auVar10[0x12] = s___001a7410[0];
  auVar10[0x13] = s___001a7410[0];
  auVar10[0x14] = s___001a7410[0];
  auVar10[0x15] = s___001a7410[0];
  auVar10[0x16] = s___001a7410[0];
  auVar10[0x17] = s___001a7410[0];
  auVar10[0x18] = s___001a7410[0];
  auVar10[0x19] = s___001a7410[0];
  auVar10[0x1a] = s___001a7410[0];
  auVar10[0x1b] = s___001a7410[0];
  auVar10[0x1c] = s___001a7410[0];
  auVar10[0x1d] = s___001a7410[0];
  auVar10[0x1e] = s___001a7410[0];
  auVar10[0x1f] = s___001a7410[0];
  auVar11[1] = s___001a7411[0];
  auVar11[0] = s___001a7411[0];
  auVar11[2] = s___001a7411[0];
  auVar11[3] = s___001a7411[0];
  auVar11[4] = s___001a7411[0];
  auVar11[5] = s___001a7411[0];
  auVar11[6] = s___001a7411[0];
  auVar11[7] = s___001a7411[0];
  auVar11[8] = s___001a7411[0];
  auVar11[9] = s___001a7411[0];
  auVar11[10] = s___001a7411[0];
  auVar11[0xb] = s___001a7411[0];
  auVar11[0xc] = s___001a7411[0];
  auVar11[0xd] = s___001a7411[0];
  auVar11[0xe] = s___001a7411[0];
  auVar11[0xf] = s___001a7411[0];
  auVar11[0x10] = s___001a7411[0];
  auVar11[0x11] = s___001a7411[0];
  auVar11[0x12] = s___001a7411[0];
  auVar11[0x13] = s___001a7411[0];
  auVar11[0x14] = s___001a7411[0];
  auVar11[0x15] = s___001a7411[0];
  auVar11[0x16] = s___001a7411[0];
  auVar11[0x17] = s___001a7411[0];
  auVar11[0x18] = s___001a7411[0];
  auVar11[0x19] = s___001a7411[0];
  auVar11[0x1a] = s___001a7411[0];
  auVar11[0x1b] = s___001a7411[0];
  auVar11[0x1c] = s___001a7411[0];
  auVar11[0x1d] = s___001a7411[0];
  auVar11[0x1e] = s___001a7411[0];
  auVar11[0x1f] = s___001a7411[0];
  while (0x1f < (ulonglong)((longlong)pauVar1 - (longlong)pauVar6)) {
    auVar2 = vlddqu_avx(*pauVar6);
    auVar3 = vpmaxub_avx2(auVar2,auVar10);
    auVar3 = vpcmpeqb_avx2(auVar2,auVar3);
    auVar2 = vpcmpgtb_avx2(auVar2,auVar11);
    auVar2 = vpandn_avx2(auVar2,auVar3);
    uVar4 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
    uVar5 = 0;
    for (uVar8 = ~uVar4; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    pauVar6 = (undefined1 (*) [32])(*pauVar6 + uVar5);
    *(undefined1 (**) [32])(param_1 + 0x10) = pauVar6;
    if (uVar4 != 0xffffffff) {
      return;
    }
  }
  do {
    if ((ulonglong)((longlong)pauVar1 - (longlong)pauVar6) < 8) {
LAB_006beae9:
      if (pauVar1 <= pauVar6) {
        return;
      }
      if (URI_MAP[(byte)(*pauVar6)[0]] != '\x01') {
        return;
      }
      pauVar6 = (undefined1 (*) [32])(*pauVar6 + 1);
    }
    else {
      uVar9 = *(ulonglong *)*pauVar6;
      uVar9 = ((uVar9 ^ 0x7f7f7f7f7f7f7f7f) + 0xfefefefefefefeff | uVar9 + 0xdedededededededf) &
              ~uVar9;
      if ((uVar9 & 0x8080808080808080) != 0) {
        if ((char)uVar9 < '\0') {
          lVar7 = 0;
        }
        else {
          lVar7 = 1;
          if (-1 < (short)uVar9) {
            lVar7 = 2;
            if (((((uVar9 & 0x800000) == 0) && (lVar7 = 3, -1 < (int)uVar9)) &&
                (lVar7 = 4, (uVar9 >> 0x27 & 1) == 0)) && (lVar7 = 5, (uVar9 >> 0x2f & 1) == 0)) {
              lVar7 = 7 - (ulonglong)((uVar9 >> 0x37 & 1) != 0);
            }
          }
        }
        pauVar6 = (undefined1 (*) [32])(*pauVar6 + lVar7);
        *(undefined1 (**) [32])(param_1 + 0x10) = pauVar6;
        goto LAB_006beae9;
      }
      pauVar6 = (undefined1 (*) [32])(*pauVar6 + 8);
    }
    *(undefined1 (**) [32])(param_1 + 0x10) = pauVar6;
  } while( true );
}


