// abigail2_1.ysc @ L48236
void func_1209(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
  {
    if (iParam0 == 1)
    {
      DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
    }
    else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
    {
      DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
    }
  }
}