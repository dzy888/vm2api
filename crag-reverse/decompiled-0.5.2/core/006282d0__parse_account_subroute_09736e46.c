// 006282d0 parse_account_subroute

/* craggemini_core[66f3c71560d70857]::server::parse_account_subroute */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::server::parse_account_subroute
          (undefined8 *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
          ulonglong param_5)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte *pbVar6;
  char local_68 [8];
  ulonglong local_60;
  longlong local_58;
  byte *local_50;
  ulonglong local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  undefined1 local_28;
  
  if (param_5 <= param_3) {
    iVar2 = (*(code *)PTR_bcmp_00799020)(param_4,param_5);
    if ((iVar2 == 0) && (param_3 = param_3 - param_5, param_3 != 0)) {
      pbVar6 = (byte *)(param_2 + param_5);
      local_40 = 0;
      local_28 = 1;
      local_30 = 0x2f0000002f;
      local_50 = pbVar6;
      local_48 = param_3;
      local_38 = param_3;
      <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
      ::next_match(local_68,&local_50);
      if (local_68[0] == '\0') {
        pbVar4 = (byte *)0x1;
        lVar3 = 0;
        local_60 = param_3;
      }
      else {
        lVar3 = param_3 - local_58;
        pbVar4 = pbVar6 + local_58;
      }
      if ((0xffffffffffffff7f < local_60 - 0x81) &&
         (((byte)(*pbVar6 - 0x30) < 10 || ((byte)((*pbVar6 & 0xdf) + 0xbf) < 0x1a)))) {
        uVar5 = 0;
        do {
          bVar1 = pbVar6[uVar5];
          if (((9 < (byte)(bVar1 - 0x30)) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) &&
             ((0x32 < bVar1 - 0x2d ||
              ((0x4000000000003U >> ((ulonglong)(bVar1 - 0x2d) & 0x3f) & 1) == 0))))
          goto LAB_006282fc;
          uVar5 = uVar5 + 1;
        } while (local_60 != uVar5);
        if (local_60 < 0x41) {
          *param_1 = pbVar6;
          param_1[1] = local_60;
          param_1[2] = pbVar4;
          param_1[3] = lVar3;
          return param_1;
        }
      }
    }
  }
LAB_006282fc:
  *param_1 = 0;
  return param_1;
}


