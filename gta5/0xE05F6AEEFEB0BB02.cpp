// fm_content_island_heist.ysc @ L128034
void func_2502(int iParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
  if (iParam14 != PLAYER::PLAYER_ID())
  {
    return;
  }
  if (!Param1.f_5)
  {
    return;
  }
  if (!func_2504(iParam0) && !func_2503(iParam0))
  {
    return;
  }
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_12697.f_946[iParam0 /*5*/]))
  {
    if (func_808(Local_12697.f_946[iParam0 /*5*/]))
    {
      OBJECT::_0xE05F6AEEFEB0BB02(NETWORK::NET_TO_OBJ(Local_12697.f_946[iParam0 /*5*/]), 0, -100f);
    }
  }
  func_1635(5);
}