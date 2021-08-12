// beat_sharp_shooter.ysc @ L4030
void func_100(int iParam0, int iParam1)
{
  if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
  {
    WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam1, true, true);
    if (func_204(joaat("WEAPON_REVOLVER_CATTLEMAN_DUALWIELD")))
    {
      func_205(*iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_DUALWIELD"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
    }
    else
    {
      func_205(*iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
    }
    if (func_204(joaat("WEAPON_REPEATER_HENRY")))
    {
      func_205(*iParam1, joaat("WEAPON_REPEATER_HENRY"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
    }
    else if (func_204(joaat("WEAPON_REPEATER_WINCHESTER")))
    {
      func_205(*iParam1, joaat("WEAPON_REPEATER_WINCHESTER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
    }
    else
    {
      func_205(*iParam1, joaat("WEAPON_REPEATER_CARBINE"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
    }
    WEAPON::SET_PED_INFINITE_AMMO(*iParam1, true, 0);
    PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 38, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 16, false);
    PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 26, true);
  }
}