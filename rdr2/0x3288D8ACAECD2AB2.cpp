// guama2.ysc @ L17436
void func_167(char[4] cParam0, bool bParam1)
{
  if (bParam1)
  {
    func_434(-1, 1);
    if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_59[0]))
    {
      ENTITY::SET_ENTITY_COORDS(Local_14.f_59[0], 1961.953f, -4700.601f, 46.52f, true, false, true, true);
    }
    if (func_33(cParam0) > iLocal_83)
    {
      func_435();
    }
  }
  else
  {
    func_436(&(Local_14.f_59[0]));
    func_437(&uLocal_415);
    func_437(&uLocal_410);
    func_437(&uLocal_424);
    func_437(&uLocal_420);
    func_436(&iLocal_429);
    func_436(&iLocal_428);
    func_436(&iLocal_431);
    func_436(&iLocal_430);
    if (OBJECT::DOES_PICKUP_EXIST(iLocal_433))
    {
      OBJECT::REMOVE_PICKUP(iLocal_433);
    }
  }
}