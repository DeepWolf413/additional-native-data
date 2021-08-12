// fm_content_island_heist.ysc @ L169509
void func_3443(int iParam0)
{
  switch (iParam0)
  {
    case 0:
      ENTITY::SET_ENTITY_COORDS(iLocal_12605, func_3447(func_3334()), false, false, false, true);
      ENTITY::SET_ENTITY_HEADING(iLocal_12605, func_3446(func_3334()));
      CAM::_SET_GAMEPLAY_CAM_RELATIVE_ROTATION(0f, 0f, 1f);
      ENTITY::CREATE_MODEL_HIDE(5002.537f, -4926.006f, 9.408f, 1f, joaat("h4_prop_h4_lrggate_01_l"), false);
      ENTITY::CREATE_MODEL_HIDE(5005.271f, -4930.745f, 9.405f, 1f, joaat("h4_prop_h4_lrggate_01_r"), false);
      func_3444(1);
      break;
  }
}