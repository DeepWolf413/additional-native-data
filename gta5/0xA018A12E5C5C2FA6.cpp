// taxi_clowncar.ysc @ L12486
void func_344(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
  func_267(uParam0, 16, 0, 0);
  func_267(uParam0, 17, 0f, 1);
  StringConCat(&cParam1, sParam7, 24);
  if (!PED::IS_PED_INJURED(uParam0->f_3))
  {
    AUDIO::INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, func_345(uParam0));
  }
}