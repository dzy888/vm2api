// 0062b3c0 parse_gemini_model_route

/* craggemini_core[66f3c71560d70857]::server::parse_gemini_model_route */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::server::parse_gemini_model_route
          (longlong *param_1,longlong *param_2,ulonglong param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int local_70 [2];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  if (param_3 < 0xf) {
    if (param_3 < 0xb) goto LAB_0062b483;
LAB_0062b404:
    if (*(longlong *)((longlong)param_2 + 3) != 0x2f736c65646f6d2f || *param_2 != 0x65646f6d2f31762f
       ) goto LAB_0062b483;
    lVar2 = 0xb;
    param_3 = param_3 - 0xb;
  }
  else {
    if (*(longlong *)((longlong)param_2 + 7) != 0x2f736c65646f6d2f || *param_2 != 0x2f6174656231762f
       ) goto LAB_0062b404;
    lVar2 = 0xf;
    param_3 = param_3 - 0xf;
  }
  if (param_3 == 0) goto LAB_0062b483;
  lVar4 = (longlong)param_2 + lVar2;
  if (param_3 < 0x10) {
    uVar3 = 0;
    do {
      if (*(char *)(lVar4 + uVar3) == '/') goto LAB_0062b483;
      uVar3 = uVar3 + 1;
    } while (param_3 != uVar3);
  }
  else {
    lVar2 = (*(code *)PTR_memchr_aligned_00799490)(lVar2,param_3);
    if (lVar2 == 1) goto LAB_0062b483;
  }
  local_48 = 0;
  local_30 = 1;
  local_38 = 0x3a0000003a;
  local_58 = lVar4;
  local_50 = param_3;
  local_40 = param_3;
  <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::ReverseSearcher>
  ::next_match_back(local_70,&local_58);
  if (local_70[0] == 1) {
    if ((local_68 != 0) &&
       (cVar1 = models::valid_requested_model_syntax(lVar4,local_68), cVar1 != '\0')) {
      lVar2 = param_3 - local_60;
      plVar5 = (longlong *)(local_60 + lVar4);
      if (lVar2 == 0x15) {
        auVar7[0] = -(*(char *)((longlong)plVar5 + 5) == DAT_00183060);
        auVar7[1] = -(*(char *)((longlong)plVar5 + 6) == UNK_00183061);
        auVar7[2] = -(*(char *)((longlong)plVar5 + 7) == UNK_00183062);
        auVar7[3] = -((char)plVar5[1] == UNK_00183063);
        auVar7[4] = -(*(char *)((longlong)plVar5 + 9) == UNK_00183064);
        auVar7[5] = -(*(char *)((longlong)plVar5 + 10) == UNK_00183065);
        auVar7[6] = -(*(char *)((longlong)plVar5 + 0xb) == UNK_00183066);
        auVar7[7] = -(*(char *)((longlong)plVar5 + 0xc) == UNK_00183067);
        auVar7[8] = -(*(char *)((longlong)plVar5 + 0xd) == UNK_00183068);
        auVar7[9] = -(*(char *)((longlong)plVar5 + 0xe) == UNK_00183069);
        auVar7[10] = -(*(char *)((longlong)plVar5 + 0xf) == UNK_0018306a);
        auVar7[0xb] = -((char)plVar5[2] == UNK_0018306b);
        auVar7[0xc] = -(*(char *)((longlong)plVar5 + 0x11) == UNK_0018306c);
        auVar7[0xd] = -(*(char *)((longlong)plVar5 + 0x12) == UNK_0018306d);
        auVar7[0xe] = -(*(char *)((longlong)plVar5 + 0x13) == UNK_0018306e);
        auVar7[0xf] = -(*(char *)((longlong)plVar5 + 0x14) == UNK_0018306f);
        auVar6[0] = -((char)*plVar5 == DAT_00183be0);
        auVar6[1] = -(*(char *)((longlong)plVar5 + 1) == UNK_00183be1);
        auVar6[2] = -(*(char *)((longlong)plVar5 + 2) == UNK_00183be2);
        auVar6[3] = -(*(char *)((longlong)plVar5 + 3) == UNK_00183be3);
        auVar6[4] = -(*(char *)((longlong)plVar5 + 4) == UNK_00183be4);
        auVar6[5] = -(*(char *)((longlong)plVar5 + 5) == UNK_00183be5);
        auVar6[6] = -(*(char *)((longlong)plVar5 + 6) == UNK_00183be6);
        auVar6[7] = -(*(char *)((longlong)plVar5 + 7) == UNK_00183be7);
        auVar6[8] = -((char)plVar5[1] == UNK_00183be8);
        auVar6[9] = -(*(char *)((longlong)plVar5 + 9) == UNK_00183be9);
        auVar6[10] = -(*(char *)((longlong)plVar5 + 10) == UNK_00183bea);
        auVar6[0xb] = -(*(char *)((longlong)plVar5 + 0xb) == UNK_00183beb);
        auVar6[0xc] = -(*(char *)((longlong)plVar5 + 0xc) == UNK_00183bec);
        auVar6[0xd] = -(*(char *)((longlong)plVar5 + 0xd) == UNK_00183bed);
        auVar6[0xe] = -(*(char *)((longlong)plVar5 + 0xe) == UNK_00183bee);
        auVar6[0xf] = -(*(char *)((longlong)plVar5 + 0xf) == UNK_00183bef);
        auVar6 = auVar6 & auVar7;
        if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) == 0xffff) goto LAB_0062b5a9;
      }
      else if ((lVar2 == 0xf) &&
              (*(longlong *)((longlong)plVar5 + 7) == 0x746e65746e6f4365 &&
               *plVar5 == 0x65746172656e6567)) {
LAB_0062b5a9:
        *param_1 = lVar4;
        param_1[1] = local_68;
        param_1[2] = (longlong)plVar5;
        param_1[3] = lVar2;
        return param_1;
      }
LAB_0062b483:
      *param_1 = 0;
      return param_1;
    }
  }
  else {
    cVar1 = models::valid_requested_model_syntax(lVar4,param_3);
    if (cVar1 != '\0') {
      *param_1 = lVar4;
      param_1[1] = param_3;
      param_1[2] = 0;
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}


