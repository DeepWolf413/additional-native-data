// family_scene_f0.ysc @ L96994
void func_451(struct<3> Param0, struct<3> Param3, var uParam6)
{
  if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
  {
    if (MISC::HAS_BULLET_IMPACTED_IN_BOX(Param0, Param3, true, true))
    {
      *uParam6++;
      if (*uParam6 > 6)
      {
        Global_94393 = 3;
      }
    }
    else if ((FIRE::IS_EXPLOSION_IN_AREA(0, Param0, Param3) || FIRE::IS_EXPLOSION_IN_AREA(2, Param0, Param3)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Param0, Param3, joaat("weapon_grenadelauncher"), true))
    {
      Global_94393 = 5;
    }
  }
}