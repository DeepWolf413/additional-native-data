// family3.ysc @ L125616
int func_918(int iParam0, int iParam1, float fParam2)
{
  int iVar0;
  struct<3> Var1;
  var uVar4;
  
  if (!PED::IS_PED_INJURED(iParam0))
  {
    if (ENTITY::DOES_ENTITY_EXIST(iParam1))
    {
      if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
      {
        if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true))
        {
          if (iVar0 == joaat("weapon_petrolcan"))
          {
            Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
            if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &uVar4, false, false))
            {
              Var1.f_2 = uVar4;
            }
            if (PED::IS_PED_SHOOTING(iParam0) && GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(Var1, fParam2))
            {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}