// 00545d10 authenticated_claims

/* craggemini_core[66f3c71560d70857]::license::authenticated_claims */

void __rustcall
craggemini_core[66f3c71560d70857]::license::authenticated_claims
          (undefined8 *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
          longlong param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  ulonglong local_300;
  ulonglong local_2f8;
  longlong local_2f0;
  ulonglong local_2e8;
  undefined8 local_2e0;
  ulonglong local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8;
  byte local_2c0;
  char cStack_2bf;
  ulonglong local_2b8;
  undefined1 local_2b0 [8];
  ulonglong local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  longlong local_290;
  undefined1 local_288;
  undefined7 uStack_287;
  ulonglong local_280;
  undefined8 local_270;
  longlong local_268;
  longlong local_250;
  longlong local_238;
  longlong local_220;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  undefined4 local_188;
  char local_180;
  char cStack_17f;
  undefined2 uStack_17e;
  undefined2 uStack_17c;
  undefined2 uStack_17a;
  undefined1 uStack_178;
  undefined1 uStack_177;
  undefined4 uStack_176;
  undefined2 uStack_172;
  undefined2 uStack_170;
  undefined4 uStack_16e;
  undefined2 uStack_16a;
  undefined4 uStack_166;
  undefined4 uStack_162;
  undefined4 local_15e;
  undefined4 uStack_15a;
  undefined4 uStack_156;
  undefined4 uStack_152;
  undefined4 uStack_14b;
  undefined4 uStack_147;
  undefined4 uStack_143;
  char local_70 [9];
  undefined4 uStack_67;
  undefined4 local_5f;
  undefined4 uStack_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (0x10000 < param_3) goto LAB_00545d2d;
  local_300 = 0;
  local_2e0 = 0;
  local_2d0 = 0x2e0000002e;
  local_2c8 = 1;
  local_2c0 = 1;
  cStack_2bf = '\0';
  local_2f8 = param_3;
  local_2f0 = param_2;
  local_2e8 = param_3;
  local_2d8 = param_3;
  <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match(&local_180,&local_2f0);
  lVar9 = local_2f0;
  if (CONCAT22(uStack_17e,CONCAT11(cStack_17f,local_180)) == 1) {
    lVar8 = CONCAT26(uStack_172,CONCAT42(uStack_176,CONCAT11(uStack_177,uStack_178))) - local_300;
    uVar3 = CONCAT26(uStack_16a,CONCAT42(uStack_16e,uStack_170));
  }
  else {
    if (cStack_2bf != '\0') goto LAB_00545d2d;
    cStack_2bf = '\x01';
    lVar8 = local_2f8 - local_300;
    uVar3 = local_300;
    param_2 = local_2f0;
    if ((local_2f8 != local_300 | local_2c0) != 1) goto LAB_00545d2d;
  }
  if (((lVar8 != 6) ||
      ((short)((int *)(param_2 + local_300))[1] != 0x314c ||
       *(int *)(param_2 + local_300) != 0x47415243)) || (cStack_2bf != '\0')) goto LAB_00545d2d;
  local_300 = uVar3;
  <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match(&local_180,&local_2f0);
  uVar3 = local_300;
  if (CONCAT22(uStack_17e,CONCAT11(cStack_17f,local_180)) == 1) {
    lVar8 = CONCAT26(uStack_172,CONCAT42(uStack_176,CONCAT11(uStack_177,uStack_178))) - local_300;
    local_300 = CONCAT26(uStack_16a,CONCAT42(uStack_16e,uStack_170));
  }
  else {
    if (cStack_2bf != '\0') goto LAB_00545d2d;
    cStack_2bf = '\x01';
    lVar8 = local_2f8 - local_300;
    lVar9 = local_2f0;
    if ((lVar8 != 0 | local_2c0) != 1) goto LAB_00545d2d;
  }
  uVar11 = base64[729f3f786a952ed7]::engine::Engine::decode::inner::
           <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
                     (&local_290,"",lVar9 + uVar3,lVar8);
  lVar8 = local_290;
  lVar9 = local_2f0;
  if (local_290 == -1) {
LAB_00545d2d:
    *(undefined1 *)(param_1 + 1) = 3;
    *param_1 = 0xffffffffffffffff;
    return;
  }
  uVar1 = CONCAT71(uStack_287,local_288);
  if (cStack_2bf == '\0') {
    local_2b8 = local_280;
    uVar11 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
             ::next_match(&local_290,&local_2f0);
    uVar3 = local_300;
    if ((int)local_290 != 1) {
      if (cStack_2bf == '\0') {
        cStack_2bf = '\x01';
        lVar10 = local_2f8 - local_300;
        lVar9 = local_2f0;
        if ((lVar10 != 0 | local_2c0) == 1) goto LAB_00545f6c;
      }
      goto LAB_00545e84;
    }
    lVar10 = CONCAT71(uStack_287,local_288) - local_300;
    local_300 = local_280;
LAB_00545f6c:
    uVar11 = decode::<64:usize>(&local_180,lVar9 + uVar3,lVar10);
    cVar5 = cStack_17f;
    if (local_180 != '\x01') {
      uStack_3c = uStack_14b;
      uStack_38 = uStack_147;
      uStack_34 = uStack_143;
      uStack_4f = local_15e;
      uStack_4b = uStack_15a;
      uStack_47 = uStack_156;
      uStack_43 = uStack_152;
      local_5f = uStack_16e;
      uStack_57 = uStack_166;
      uStack_53 = uStack_162;
      uStack_67 = uStack_176;
      local_70[0] = cStack_17f;
      lVar9 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next(&local_300);
      uVar11 = extraout_XMM0_Da;
      if (lVar9 == 0) {
        cVar5 = verify_signature(param_4,"CRAG-LICENSE-V1",0x10,uVar1,local_2b8,local_70);
        uVar11 = extraout_XMM0_Da_00;
        if (cVar5 != -1) goto LAB_00545f8e;
        local_2a8 = local_2b8;
        local_2a0 = 0;
        uStack_298 = 0;
        uVar11 = serde_json[dc3825464c436029]::de::from_trait::
                 <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::license::Claims>
                           (&local_180,local_2b0);
        uVar4 = uStack_178;
        if (CONCAT26(uStack_17a,
                     CONCAT24(uStack_17c,CONCAT22(uStack_17e,CONCAT11(cStack_17f,local_180)))) != -1
           ) {
          (*(code *)PTR_memcpy_00799008)(uVar11,0x107);
          local_288 = uVar4;
          cVar5 = '\x03';
          if (((((local_188._1_1_ == '\x01') && (local_280 == 10)) &&
               ((plVar2 = (longlong *)CONCAT71(uStack_287,uVar4),
                (short)plVar2[1] == 0x696e && *plVar2 == 0x696d656767617263 &&
                ((0xfffffffffffffeff < local_268 - 0x101U &&
                 (cVar6 = <char_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                                    (local_270), cVar6 == '\0')))))) && (local_1a0 <= local_198)) &&
             (local_198 < local_190)) {
            expires_at(&local_180,local_1a0,local_188);
            if (local_180 != '\x01') {
              if (((((local_190 !=
                      CONCAT26(uStack_172,CONCAT42(uStack_176,CONCAT11(uStack_177,uStack_178)))) ||
                    (cVar5 = <craggemini_core[66f3c71560d70857]::license::MachineIdentity>::validate
                                       (param_5), cVar5 != -1)) ||
                   (cVar5 = '\x04', local_250 != *(longlong *)(param_5 + 0x28))) ||
                  ((iVar7 = (*(code *)PTR_bcmp_00799020)(), iVar7 != 0 ||
                   (local_238 != *(longlong *)(param_5 + 0x40))))) ||
                 ((iVar7 = (*(code *)PTR_bcmp_00799020)(), iVar7 != 0 ||
                  ((local_220 != *(longlong *)(param_5 + 0x58) ||
                   (iVar7 = (*(code *)PTR_bcmp_00799020)(), iVar7 != 0)))))) goto LAB_00546239;
              decode_hash(&local_180,local_210,local_208);
              if ((local_180 != '\x01') &&
                 ((((decode::<32:usize>(&local_180,local_1f8,local_1f0), local_180 != '\x01' &&
                    (decode::<12:usize>(&local_180,local_1e0,local_1d8), local_180 != '\x01')) &&
                   (decode::<32:usize>(&local_180,local_1c8,local_1c0), local_180 != '\x01')) &&
                  (uVar11 = decode::<16:usize>(&local_180,local_1b0,local_1a8), local_180 != '\x01')
                  ))) {
                uVar11 = (*(code *)PTR_memcpy_00799008)(uVar11,0x110);
                goto LAB_00545e8f;
              }
            }
            cVar5 = cStack_17f;
          }
LAB_00546239:
          *(char *)(param_1 + 1) = cVar5;
          *param_1 = 0xffffffffffffffff;
          uVar11 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <craggemini_core[66f3c71560d70857]::license::Claims>(&local_290);
          goto LAB_00545e8f;
        }
        uVar11 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <serde_json[dc3825464c436029]::error::Error>(local_2b0);
      }
      goto LAB_00545e84;
    }
LAB_00545f8e:
    *(char *)(param_1 + 1) = cVar5;
  }
  else {
LAB_00545e84:
    *(undefined1 *)(param_1 + 1) = 3;
  }
  *param_1 = 0xffffffffffffffff;
LAB_00545e8f:
  if (lVar8 == 0) {
    return;
  }
  (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
  return;
}


