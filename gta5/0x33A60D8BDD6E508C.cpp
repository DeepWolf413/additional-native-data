// net_apartment_activity.ysc @ L79306
void func_505(var uParam0)
{
  switch (uParam0->f_1930)
  {
    case 167:
    case 179:
      if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_14.f_1605[0 /*48*/].f_17, false))
      {
        PED::_SET_PED_CAN_PLAY_INJURED_ANIMS(uParam0->f_14.f_1605[0 /*48*/].f_17, true);
      }
      break;
  }
}