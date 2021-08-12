// fbi4.ysc @ L128232
int func_943(float fParam0)
{
  switch (iLocal_3252)
  {
    case 0:
      iLocal_3808 = OBJECT::GET_RAYFIRE_MAP_OBJECT(890.3647f, -2367.289f, 28.10582f, 10f, "DES_Smash2");
      if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_3808))
      {
        OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_3808, 4);
        iLocal_3252++;
      }
      break;
    
    case 1:
      if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_3808) == 5)
      {
        if (fParam0 > 1100f)
        {
          OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_3808, 6);
          iLocal_3252++;
          return 1;
        }
      }
      break;
    
    case 2:
      break;
    
    case 22:
      break;
  }
  return 0;
}