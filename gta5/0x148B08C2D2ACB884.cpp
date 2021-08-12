// fmmc_launcher.ysc @ L411407
void func_6831(bool bParam0, bool bParam1)
{
  if (func_6832())
  {
    return;
  }
  if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bParam0)) && ENTITY::DOES_ENTITY_EXIST(Global_2450309[bParam1 /*13*/]))
  {
    if (func_147(134))
    {
      PED::_CLONE_PED_TO_TARGET_EX(PLAYER::GET_PLAYER_PED(bParam0), Global_2450309[bParam1 /*13*/], false);
      func_1473(Global_2450309[bParam1 /*13*/], &(Global_1625089[bParam1 /*47*/]), 0, -1);
    }
    else
    {
      PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(bParam0), Global_2450309[bParam1 /*13*/]);
      func_6834(bParam1);
    }
  }
}