// act_cinema.ysc @ L93980
void func_637(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
  }
  if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
  {
    if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
    {
      ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
    }
  }
  ENTITY::SET_ENTITY_VISIBLE(iParam0, false, false);
  ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
  func_688(iParam0);
  Global_2405077.f_45.f_173 = iParam0;
  Global_1323080 = iParam0;
  if (Global_2405077.f_45.f_172)
  {
    func_654(iParam0, 1);
  }
  else
  {
    func_638(iParam0, func_500(PLAYER::PLAYER_ID()));
  }
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
  }
  Global_2405077.f_45.f_175 = 1;
}