// camp_pronghornranch.ysc @ L11337
void func_364(int iParam0)
{
  OBJECT::_0xA93F925F1942E434(-1220186332, 0);
  OBJECT::_0xA93F925F1942E434(240622919, 0);
  OBJECT::_0xA93F925F1942E434(663931308, 0);
  OBJECT::_0xA93F925F1942E434(-647975607, 0);
  OBJECT::_0x1BC47A9DEDC8DF5D(-1899662469, 1);
  OBJECT::_0x1BC47A9DEDC8DF5D(1535511805, 1);
  OBJECT::REMOVE_DOOR_FROM_SYSTEM(-1220186332);
  OBJECT::REMOVE_DOOR_FROM_SYSTEM(240622919);
  OBJECT::REMOVE_DOOR_FROM_SYSTEM(663931308);
  OBJECT::REMOVE_DOOR_FROM_SYSTEM(-647975607);
  OBJECT::REMOVE_DOOR_FROM_SYSTEM(-1899662469);
  OBJECT::REMOVE_DOOR_FROM_SYSTEM(1535511805);
  if (HUD::_DOES_TEXT_DATABASE_EXIST("CAPROAU"))
  {
    if (HUD::_TEXT_DATABASE_HAS_LOADED("CAPROAU"))
    {
      HUD::_TEXT_DATABASE_DELETE("CAPROAU");
    }
  }
  func_805();
  func_806(&uLocal_3513);
  func_807();
  func_50(262144);
}