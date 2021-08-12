// fm_bj_race_controler.ysc @ L283700
int func_3820(var uParam0, var uParam1)
{
  if (func_304(uParam1->f_570))
  {
    if (func_3821(uParam1->f_570, uParam1->f_571))
    {
      if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5318))
      {
        if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5318, false))
        {
          if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(uParam0->f_5318)))
          {
            if (!VEHICLE::_ARE_PLANE_WINGS_INTACT(uParam0->f_5318))
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