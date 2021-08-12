// paparazzo3a.ysc @ L40257
int func_345()
{
  if (iLocal_3201 < 20)
  {
    if (func_346(Local_3408))
    {
      if (ENTITY::IS_ENTITY_ON_SCREEN(Local_3408) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_3408, true), 1f))
      {
        if (!ENTITY::IS_ENTITY_OCCLUDED(Local_3408))
        {
          if (CAM::GET_FOCUS_PED_ON_SCREEN(100f, 31086, 0.42f, 0.26f, 0.01f, 50f, 0.2f, 31086, 24818) == Local_3408 || CAM::GET_FOCUS_PED_ON_SCREEN(100f, 31086, 0.42f, 0.26f, 0.01f, 50f, 0.2f, 31086, 24818) == Local_3371[0 /*9*/])
          {
            if (!func_238(Local_3408, PLAYER::PLAYER_PED_ID(), 50f, 1))
            {
              iLocal_3227 = 1;
            }
            else
            {
              iLocal_3202++;
            }
          }
        }
      }
    }
    iLocal_3201++;
  }
  if (iLocal_3202 > 5)
  {
    return 1;
  }
  return 0;
}