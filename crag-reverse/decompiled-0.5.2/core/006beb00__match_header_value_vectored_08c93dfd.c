// 006beb00 match_header_value_vectored

/* httparse[622c0e90ae307373]::simd::avx2::match_header_value_vectored */

void __rustcall
httparse[622c0e90ae307373]::simd::avx2::match_header_value_vectored(longlong param_1)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  uint uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [32];
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  pauVar1 = *(undefined1 (**) [32])(param_1 + 8);
  pauVar7 = *(undefined1 (**) [32])(param_1 + 0x10);
  auVar11[1] = s__001a7412[0];
  auVar11[0] = s__001a7412[0];
  auVar11[2] = s__001a7412[0];
  auVar11[3] = s__001a7412[0];
  auVar11[4] = s__001a7412[0];
  auVar11[5] = s__001a7412[0];
  auVar11[6] = s__001a7412[0];
  auVar11[7] = s__001a7412[0];
  auVar11[8] = s__001a7412[0];
  auVar11[9] = s__001a7412[0];
  auVar11[10] = s__001a7412[0];
  auVar11[0xb] = s__001a7412[0];
  auVar11[0xc] = s__001a7412[0];
  auVar11[0xd] = s__001a7412[0];
  auVar11[0xe] = s__001a7412[0];
  auVar11[0xf] = s__001a7412[0];
  auVar11[0x10] = s__001a7412[0];
  auVar11[0x11] = s__001a7412[0];
  auVar11[0x12] = s__001a7412[0];
  auVar11[0x13] = s__001a7412[0];
  auVar11[0x14] = s__001a7412[0];
  auVar11[0x15] = s__001a7412[0];
  auVar11[0x16] = s__001a7412[0];
  auVar11[0x17] = s__001a7412[0];
  auVar11[0x18] = s__001a7412[0];
  auVar11[0x19] = s__001a7412[0];
  auVar11[0x1a] = s__001a7412[0];
  auVar11[0x1b] = s__001a7412[0];
  auVar11[0x1c] = s__001a7412[0];
  auVar11[0x1d] = s__001a7412[0];
  auVar11[0x1e] = s__001a7412[0];
  auVar11[0x1f] = s__001a7412[0];
  auVar12[1] = s__001a7413[0];
  auVar12[0] = s__001a7413[0];
  auVar12[2] = s__001a7413[0];
  auVar12[3] = s__001a7413[0];
  auVar12[4] = s__001a7413[0];
  auVar12[5] = s__001a7413[0];
  auVar12[6] = s__001a7413[0];
  auVar12[7] = s__001a7413[0];
  auVar12[8] = s__001a7413[0];
  auVar12[9] = s__001a7413[0];
  auVar12[10] = s__001a7413[0];
  auVar12[0xb] = s__001a7413[0];
  auVar12[0xc] = s__001a7413[0];
  auVar12[0xd] = s__001a7413[0];
  auVar12[0xe] = s__001a7413[0];
  auVar12[0xf] = s__001a7413[0];
  auVar12[0x10] = s__001a7413[0];
  auVar12[0x11] = s__001a7413[0];
  auVar12[0x12] = s__001a7413[0];
  auVar12[0x13] = s__001a7413[0];
  auVar12[0x14] = s__001a7413[0];
  auVar12[0x15] = s__001a7413[0];
  auVar12[0x16] = s__001a7413[0];
  auVar12[0x17] = s__001a7413[0];
  auVar12[0x18] = s__001a7413[0];
  auVar12[0x19] = s__001a7413[0];
  auVar12[0x1a] = s__001a7413[0];
  auVar12[0x1b] = s__001a7413[0];
  auVar12[0x1c] = s__001a7413[0];
  auVar12[0x1d] = s__001a7413[0];
  auVar12[0x1e] = s__001a7413[0];
  auVar12[0x1f] = s__001a7413[0];
  auVar13[1] = s___001a7414[0];
  auVar13[0] = s___001a7414[0];
  auVar13[2] = s___001a7414[0];
  auVar13[3] = s___001a7414[0];
  auVar13[4] = s___001a7414[0];
  auVar13[5] = s___001a7414[0];
  auVar13[6] = s___001a7414[0];
  auVar13[7] = s___001a7414[0];
  auVar13[8] = s___001a7414[0];
  auVar13[9] = s___001a7414[0];
  auVar13[10] = s___001a7414[0];
  auVar13[0xb] = s___001a7414[0];
  auVar13[0xc] = s___001a7414[0];
  auVar13[0xd] = s___001a7414[0];
  auVar13[0xe] = s___001a7414[0];
  auVar13[0xf] = s___001a7414[0];
  auVar13[0x10] = s___001a7414[0];
  auVar13[0x11] = s___001a7414[0];
  auVar13[0x12] = s___001a7414[0];
  auVar13[0x13] = s___001a7414[0];
  auVar13[0x14] = s___001a7414[0];
  auVar13[0x15] = s___001a7414[0];
  auVar13[0x16] = s___001a7414[0];
  auVar13[0x17] = s___001a7414[0];
  auVar13[0x18] = s___001a7414[0];
  auVar13[0x19] = s___001a7414[0];
  auVar13[0x1a] = s___001a7414[0];
  auVar13[0x1b] = s___001a7414[0];
  auVar13[0x1c] = s___001a7414[0];
  auVar13[0x1d] = s___001a7414[0];
  auVar13[0x1e] = s___001a7414[0];
  auVar13[0x1f] = s___001a7414[0];
  while (0x1f < (ulonglong)((longlong)pauVar1 - (longlong)pauVar7)) {
    auVar2 = vlddqu_avx(*pauVar7);
    auVar4 = vpmaxub_avx2(auVar2,auVar11);
    auVar4 = vpcmpeqb_avx2(auVar2,auVar4);
    auVar3 = vpcmpeqb_avx2(auVar2,auVar12);
    auVar4 = vpor_avx2(auVar3,auVar4);
    auVar2 = vpcmpgtb_avx2(auVar2,auVar13);
    auVar2 = vpandn_avx2(auVar2,auVar4);
    uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
    uVar6 = 0;
    for (uVar9 = ~uVar5; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    pauVar7 = (undefined1 (*) [32])(*pauVar7 + uVar6);
    *(undefined1 (**) [32])(param_1 + 0x10) = pauVar7;
    if (uVar5 != 0xffffffff) {
      return;
    }
  }
  do {
    if ((ulonglong)((longlong)pauVar1 - (longlong)pauVar7) < 8) {
LAB_006bec79:
      if (pauVar1 <= pauVar7) {
        return;
      }
      if (""[(byte)(*pauVar7)[0]] != '\x01') {
        return;
      }
      pauVar7 = (undefined1 (*) [32])(*pauVar7 + 1);
    }
    else {
      uVar10 = *(ulonglong *)*pauVar7;
      uVar10 = ((uVar10 ^ 0x7f7f7f7f7f7f7f7f) + 0xfefefefefefefeff | uVar10 + 0xdfdfdfdfdfdfdfe0) &
               ~uVar10;
      if ((uVar10 & 0x8080808080808080) != 0) {
        if ((char)uVar10 < '\0') {
          lVar8 = 0;
        }
        else {
          lVar8 = 1;
          if (-1 < (short)uVar10) {
            lVar8 = 2;
            if (((((uVar10 & 0x800000) == 0) && (lVar8 = 3, -1 < (int)uVar10)) &&
                (lVar8 = 4, (uVar10 >> 0x27 & 1) == 0)) && (lVar8 = 5, (uVar10 >> 0x2f & 1) == 0)) {
              lVar8 = 7 - (ulonglong)((uVar10 >> 0x37 & 1) != 0);
            }
          }
        }
        pauVar7 = (undefined1 (*) [32])(*pauVar7 + lVar8);
        *(undefined1 (**) [32])(param_1 + 0x10) = pauVar7;
        goto LAB_006bec79;
      }
      pauVar7 = (undefined1 (*) [32])(*pauVar7 + 8);
    }
    *(undefined1 (**) [32])(param_1 + 0x10) = pauVar7;
  } while( true );
}


