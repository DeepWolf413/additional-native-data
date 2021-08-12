// beat_sharp_shooter.ysc @ L23741
void func_628()
{
  switch (Local_211)
  {
    case 0:
      switch (Local_211.f_1)
      {
        case 0:
          TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1568.106f, -717.2793f, 42.06759f, 1f, -1, 3f, 1, func_813(1568.106f, -717.2793f, 42.06759f, ENTITY::GET_ENTITY_COORDS(Local_287.f_11, true, false), 1));
          break;
        case 2:
          TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2452.526f, -815.6995f, 42.6498f, 1f, -1, 0.25f, 1, 4.5582f);
          TASK::_TASK_JUMP_2(0, 2452.365f, -814.3772f, 40.71862f, 0);
          break;
      }
      break;
  }
}