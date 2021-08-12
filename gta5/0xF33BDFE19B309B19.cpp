// act_cinema.ysc @ L4813
void func_129(bool bParam0)
{
  struct<14> Var0;
  int iVar14;
  
  if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
  {
    if (Global_4456448.f_133999 == 0)
    {
      if ((Global_2405077.f_2697 == -99 || Global_2405077.f_2697 == 0) || !func_344(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2405077.f_2697, -1))
      {
        if (!bParam0)
        {
          iVar14 = func_343(589, -1, 0);
        }
      }
      else
      {
        iVar14 = Global_2405077.f_2697;
      }
      Var0 = { func_301(func_342(), 14, iVar14, -1) };
      func_300(PLAYER::PLAYER_PED_ID(), 14, iVar14);
      func_130(PLAYER::PLAYER_PED_ID(), 14, iVar14, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
      func_130(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
    }
    else
    {
      PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
    }
  }
}