// camp_beechershope.ysc @ L48918
void func_1538()
{
  if (func_1875())
  {
    return;
  }
  if (func_1876())
  {
    TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432 /* Float: -1f */);
    Global_1914319.f_18996.f_1 = 1;
  }
  else if (Global_1914319.f_18996.f_4 != 0)
  {
    func_311(func_1877(), 10000, 0, 0, 0, 1);
    Global_1914319.f_18996.f_4 = 0;
  }
}