// saint_denis1.ysc @ L81184
void func_2026(var uParam0, int iParam1, bool bParam2)
{
  if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
  {
    if (bParam2)
    {
      if (*uParam0 == Global_35)
      {
        PED::_0x923583741DC87BCE(*uParam0, "arthur_healthy");
        PED::_0x89F5E7ADECCCB49C(*uParam0, "cautious");
      }
      else if (iParam1 == 1)
      {
        PED::_0x923583741DC87BCE(*uParam0, "John_Marston");
        PED::_0x89F5E7ADECCCB49C(*uParam0, "marston_cautious");
      }
      else
      {
        PED::_0x89F5E7ADECCCB49C(*uParam0, "cautious");
      }
      PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(*uParam0, false);
    }
    else
    {
      if (*uParam0 == Global_35 || iParam1 == 1)
      {
        PED::_0x4FD80C3DD84B817B(*uParam0);
      }
      PED::_0x58F7DB5BD8FA2288(*uParam0);
      PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(*uParam0, true);
    }
  }
}