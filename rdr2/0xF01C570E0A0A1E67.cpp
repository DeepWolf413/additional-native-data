// cornwall1.ysc @ L71285
void func_1735(int iParam0, char* sParam1, bool bParam2, bool bParam3)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    return;
  }
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
  {
    return;
  }
  if (AUDIO::_0xD89504D9D7D5057D(sParam1))
  {
    WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false);
    if (!PED::IS_PED_IN_COMBAT(iParam0, 0) && (iVar0 == joaat("WEAPON_UNARMED") || !bParam2))
    {
      if (AUDIO::_0xF01C570E0A0A1E67(sParam1))
      {
        AUDIO::RESTART_SCRIPTED_CONVERSATION(sParam1);
      }
    }
    else if (!AUDIO::_0xF01C570E0A0A1E67(sParam1))
    {
      AUDIO::PAUSE_SCRIPTED_CONVERSATION(sParam1, false, true, true, true);
    }
  }
  if (bParam3)
  {
    func_2230();
  }
}