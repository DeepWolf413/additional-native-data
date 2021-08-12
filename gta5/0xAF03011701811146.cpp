// gb_airfreight.ysc @ L36805
void func_899(bool bParam0)
{
  float fVar0;
  int iVar1;
  
  if (func_902())
  {
    iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
    if (bParam0)
    {
      fVar0 = func_901();
    }
    else
    {
      fVar0 = func_900();
    }
    if (IntToFloat(iVar1) < fVar0)
    {
      if (func_949())
      {
        if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_32()) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_396()))
        {
          if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(func_31(), func_944()))
          {
            VEHICLE::_DETACH_ENTITY_FROM_CARGOBOB(func_31(), func_944());
          }
        }
      }
    }
  }
}