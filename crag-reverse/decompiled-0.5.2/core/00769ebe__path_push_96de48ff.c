// 00769ebe path_push

/* addr2line[f7adfda4b3430143]::line::path_push */

void __rustcall
addr2line[f7adfda4b3430143]::line::path_push
          (longlong *param_1,char *param_2,ulonglong param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int local_50;
  longlong local_48;
  longlong local_40;
  
  if (((param_3 == 0) ||
      ((*param_2 != '/' &&
       ((((param_3 < 3 || (param_2[1] < -0x40)) || ((param_3 != 3 && (param_2[3] < -0x40)))) ||
        (*(short *)(param_2 + 1) != 0x2f3a)))))) &&
     (cVar1 = has_backward_slash_root(param_2,param_3), cVar1 == '\0')) {
    lVar4 = param_1[1];
    lVar3 = param_1[2];
    cVar1 = has_backward_slash_root(lVar4,lVar3);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      cVar5 = '/';
      if (cVar1 != '\0') {
        cVar5 = '\\';
      }
      if (cVar5 != *(char *)(lVar4 + -1 + lVar3)) {
        if (*param_1 == lVar3) {
          (*(code *)PTR_<alloc[12e961f32105355]::alloc::Global>_0079b1b8)(1,1,1,param_6,param_2);
          lVar4 = param_1[1];
        }
        *(char *)(lVar4 + lVar3) = cVar5;
        lVar3 = lVar3 + 1;
        param_1[2] = lVar3;
      }
    }
    if ((ulonglong)(*param_1 - lVar3) < param_3) goto LAB_0076a006;
    if (param_3 == 0) goto LAB_00769fe3;
  }
  else {
    (*(code *)PTR_try_allocate_in_0079b1d8)(1,0,1);
    if (local_50 != 1) {
      pcVar2 = (char *)0x0;
      if (param_3 != 0) {
        (*(code *)PTR_memcpy_00799008)();
        pcVar2 = param_2;
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::string::String>
                (param_1,pcVar2);
      *param_1 = local_48;
      param_1[1] = local_40;
      param_1[2] = param_3;
      return;
    }
    (*(code *)PTR_handle_error_00798ff0)();
LAB_0076a006:
    (*(code *)PTR_<alloc[12e961f32105355]::alloc::Global>_0079b1b8)(1,param_3,1);
  }
  (*(code *)PTR_memcpy_00799008)();
  lVar3 = param_1[2];
LAB_00769fe3:
  param_1[2] = lVar3 + param_3;
  return;
}


