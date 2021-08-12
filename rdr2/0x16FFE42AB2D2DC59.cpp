// beat_animal_mauling.ysc @ L1032
void func_20()
{
  int iVar0;

  if (bLocal_686 || bLocal_681)
  {
    return;
  }
  if (ENTITY::IS_ENTITY_DEAD(uLocal_693[0]))
  {
    if (func_65(uLocal_693[0], Global_35))
    {
      iVar0 = PED::GET_PED_CAUSE_OF_DEATH(uLocal_693[0]);
      if ((WEAPON::_IS_WEAPON_PISTOL(iVar0) || WEAPON::_IS_WEAPON_REVOLVER(iVar0)) || WEAPON::_IS_WEAPON_REPEATER(iVar0))
      {
        if (bLocal_685)
        {
          func_24(11, 0, 0, "MAULING_MERCY", uLocal_693[0], 0, 1065353216 /* Float: 1f */, 0);
          bLocal_686 = true;
        }
      }
      else
      {
        func_24(1, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, uLocal_693[0], 0, 1065353216 /* Float: 1f */, 0);
        bLocal_686 = true;
      }
    }
  }
}