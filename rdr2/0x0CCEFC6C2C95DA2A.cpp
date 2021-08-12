// loanshark_catfish.ysc @ L26392
bool func_833()
{
  var uVar0;
  var uVar1;
  var uVar2;
  var uVar3;

  if (!ENTITY::DOES_ENTITY_EXIST(Local_19[0 /*35*/]))
  {
    return false;
  }
  if (((ENTITY::_0x0CCEFC6C2C95DA2A(&uVar0, Local_19[0 /*35*/], 0, Global_35) == 0 && ENTITY::_0x0CCEFC6C2C95DA2A(&uVar1, Local_19[0 /*35*/], 2, Global_35) == 0) && ENTITY::_0x0CCEFC6C2C95DA2A(&uVar2, Local_19[0 /*35*/], 1, Global_35) == 0) && ENTITY::_0x0CCEFC6C2C95DA2A(&uVar3, Local_19[0 /*35*/], 3, Global_35) == 0)
  {
    return true;
  }
  else if (FIRE::IS_ENTITY_ON_FIRE(Local_19[0 /*35*/]))
  {
    return true;
  }
  return false;
}