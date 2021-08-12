// av_alligator_boar_leg.ysc @ L3918
float func_114(float fParam0)
{
  int iVar0;

  if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
  {
    iVar0 = Global_1935630.f_44;
    if (WEAPON::_IS_WEAPON_SNIPER(iVar0) || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
    {
      if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
      {
        fParam0 = (fParam0 + (CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR() * fParam0));
      }
    }
  }
  return fParam0;
}