// beat_arms_deal.ysc @ L4550
bool func_128(int iParam0, vector3 vParam1, var uParam4, var uParam5)
{
  int iVar0;

  if (iParam0 == 1)
  {
    return true;
  }
  if (func_105(vParam1))
  {
    return false;
  }
  else if (TASK::_DOES_SCENARIO_POINT_EXIST(*uParam5))
  {
    if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
    {
      iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(*uParam4);
      func_319(joaat("P_TRUNK06X"), vParam1, &iVar0, *uParam5, joaat("RANSACK_ATTACHED_CHEST_MEDIUM"));
      func_320(joaat("P_TRUNK06X"), vParam1, &iVar0, joaat("AMMO_REPEATER_AMMOBOX"), 24, *uParam5, joaat("RANSACK_ATTACHED_CHEST_MEDIUM"), 0);
      func_320(joaat("P_TRUNK06X"), vParam1, &iVar0, joaat("AMMO_REVOLVER_AMMOBOX"), 18, *uParam5, joaat("RANSACK_ATTACHED_CHEST_MEDIUM"), 0);
      return true;
    }
    else
    {
      *uParam4 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(*uParam5);
    }
  }
  else
  {
    *uParam5 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vParam1, joaat("RANSACK_ATTACHED_CHEST_MEDIUM"), 5f, 1, false);
  }
  return false;
}