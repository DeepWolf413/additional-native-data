// fm_capture_creator.ysc @ L35161
void func_548(int iParam0)
{
  struct<2> Var0;
  int iVar4;
  
  if (!MISC::IS_BIT_SET(Global_4456448.f_38, 3))
  {
    return;
  }
  iParam0->f_6672 = DATAFILE::DATADICT_CREATE_DICT(iParam0->f_1, "PwrUp");
  func_544("pwrBS", &(Global_4456448.f_140731), &(iParam0->f_6672));
  func_544("pwrMH", &(Global_4456448.f_140731.f_1), &(iParam0->f_6672));
  iVar4 = 0;
  while (iVar4 <= 11)
  {
    StringCopy(&Var0, "pwrRC_", 16);
    StringIntConCat(&Var0, iVar4, 16);
    func_544(&Var0, &(Global_4456448.f_140731.f_2[iVar4]), &(iParam0->f_6672));
    iVar4++;
  }
}