// agency_heist3a.ysc @ L126681
void func_929()
{
  switch (iLocal_4822)
  {
    case 0:
      if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_7190))
      {
        if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_7190) == 10)
        {
          iLocal_4822++;
        }
      }
      break;
    
    case 1:
      func_930("agency3a_michael_5");
      if (bLocal_4671)
      {
        iLocal_4822++;
      }
      break;
    
    case 2:
      func_930("agency3a_michael_6");
      break;
  }
}