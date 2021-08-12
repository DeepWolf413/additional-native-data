// fm_bj_race_controler.ysc @ L287234
void func_3924(var uParam0, var uParam1)
{
  float fVar0;
  
  fVar0 = 50f;
  if (func_4305(uParam0->f_570))
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5318) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_5318, false))
    {
      if (ENTITY::IS_ENTITY_TOUCHING_MODEL(uParam1->f_5318, joaat("prop_jetski_ramp_01")) || ENTITY::IS_ENTITY_TOUCHING_MODEL(uParam1->f_5318, -72574628))
      {
        ENTITY::APPLY_FORCE_TO_ENTITY(uParam1->f_5318, 0, 0f, fVar0, 0f, 0f, 0f, 0f, 0, true, true, true, false, true);
      }
    }
  }
}